#include "MainGame.h"
#include <Errors.h>
#include <ResourceManager.h>
#include <iostream>

const float CAMERA_SPEED = 5.0f;

MainGame::MainGame()
    : m_width(800), m_height(600), m_gameState(GameState::PLAY), m_time(0.0f),
      m_maxFPS(60.0f) {
  m_camera.init(m_width, m_height);
}

void MainGame::initSystems() {
  Engine::init();

  m_window.createWindow("test", m_width, m_height, Engine::BORDERLESS);
  initShaders();
  m_spriteBatch.init();
  m_fpsLimiter.init(m_maxFPS);
}

void MainGame::initShaders() {
  m_colorProgram.compileShaders("res/colorShading.vs",
                                "res/colorShading.fs");
  m_colorProgram.addAttribute("vertexPosition");
  m_colorProgram.addAttribute("vertexColor");
  m_colorProgram.addAttribute("vertexUV");
  m_colorProgram.linkShaders();
}

void MainGame::gameLoop() {
  while (m_gameState != GameState::EXIT) {

    // used for frame-time measuring
    m_fpsLimiter.begin();

    m_inputManager.handleKeyboardInput();

    processInput();
    m_time += 0.01;

    m_camera.update();

    // update all projectiles
    for (int i = 0; i < m_projectiles.size();) {
      if (m_projectiles[i].update() == true) {
        m_projectiles[i] = m_projectiles.back();
        m_projectiles.pop_back();
      } else {
        i++;
      }
    }

    drawGame();

    std::cout << m_fps << std::endl;

    m_fps = m_fpsLimiter.end();
  }
}

void MainGame::processInput() {

  if (m_inputManager.isQuitButtonPressed()) {
    m_gameState = GameState::EXIT;
  }

  if (m_inputManager.isUpButtonPressed()) {
    m_camera.setPosition(m_camera.getPosition() +
                         glm::vec2(0.0f, -CAMERA_SPEED));
  }

  if (m_inputManager.isDownButtonPressed()) {
    m_camera.setPosition(m_camera.getPosition() +
                         glm::vec2(0.0f, CAMERA_SPEED));
  }

  if (m_inputManager.isLeftButtonPressed()) {
    m_camera.setPosition(m_camera.getPosition() +
                         glm::vec2(CAMERA_SPEED, 0.0f));
  }

  if (m_inputManager.isRightButtonPressed()) {
    m_camera.setPosition(m_camera.getPosition() +
                         glm::vec2(-CAMERA_SPEED, 0.0f));
  }

}

void MainGame::drawGame() {
  glClearDepth(1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  m_colorProgram.use();

  glActiveTexture(GL_TEXTURE0);

  GLint textureLocation = m_colorProgram.getUniformLocation("mySampler");
  glUniform1i(textureLocation, 0);

  // GLuint timeLocation = m_colorProgram.getUniformLocation("time");
  // glUniform1f(timeLocation, m_time);

  // set the camera matrix
  GLint pLocation = m_colorProgram.getUniformLocation("P");
  glm::mat4 cameraMatrix = m_camera.getCameraMatrix();
  glUniformMatrix4fv(pLocation, 1, GL_FALSE, &(cameraMatrix[0][0]));

  m_spriteBatch.begin();
  glm::vec4 pos(0.0f, 0.0f, 50.0f, 50.0f);
  glm::vec4 uv(0.0f, 0.0f, 1.0f, 1.0f);
  static Engine::GLTexture texture =
      Engine::ResourceManager::getTexture("res/char.png");
  Engine::Color color;
  color.r = 255;
  color.g = 255;
  color.b = 255;
  color.a = 255;
  m_spriteBatch.draw(pos, uv, texture.id, 0.0f, color);

  for (int i = 0; i < m_projectiles.size(); ++i) {
    m_projectiles[i].draw(m_spriteBatch);
  }

  m_spriteBatch.end();
  m_spriteBatch.renderBatch();

  glBindTexture(GL_TEXTURE_2D, 0);

  m_colorProgram.unUse();

  m_window.swapBuffer();
}

void MainGame::run() {
  initSystems();
  gameLoop();
}

MainGame::~MainGame() {}
