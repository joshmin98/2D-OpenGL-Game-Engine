#include "MainGame.h"
#include <Errors.h>
#include <ResourceManager.h>
#include <iostream>
#include <string>

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
  m_colorProgram.compileShaders("../res/colorShading.vs",
                                "../res/colorShading.fs");
  m_colorProgram.addAttribute("vertexPosition");
  m_colorProgram.addAttribute("vertexColor");
  m_colorProgram.addAttribute("vertexUV");
  m_colorProgram.linkShaders();
}

void MainGame::gameLoop() {
  while (m_gameState != GameState::EXIT) {
    // used for frame-time measuring
    m_fpsLimiter.begin();

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

    /// print once every 10 frames
    static int frameCounter = 0;
    frameCounter++;
    if (frameCounter == 1000) {
      std::cout << m_fps << std::endl;
      frameCounter = 0;
    }

    m_fps = m_fpsLimiter.end();
  }
}

void MainGame::processInput() {
  SDL_Event e;

  const float CAMERA_SPEED = 5.0f;
  const float SCALE_SPEED = 0.1f;

  while (SDL_PollEvent(&e)) {
    switch (e.type) {
    case SDL_QUIT: {
      m_gameState = GameState::EXIT;
      break;
    }
    case SDL_KEYDOWN: {
      m_inputManager.pressKey(e.key.keysym.sym);
      break;
    }
    case SDL_KEYUP: {
      m_inputManager.releaseKey(e.key.keysym.sym);
      break;
    }
    case SDL_MOUSEBUTTONDOWN: {
      m_inputManager.pressKey(e.button.button);
      break;
    }
    case SDL_MOUSEBUTTONUP: {
      m_inputManager.releaseKey(e.button.button);
      break;
    }
    case SDL_MOUSEMOTION: {
      m_inputManager.setMouseCoords(e.motion.x, e.motion.y);
      break;
    }
    default:
      break;
    }

    if (m_inputManager.isKeyPressed(SDLK_w)) {
      m_camera.setPosition(m_camera.getPosition() +
                           glm::vec2(0.0f, CAMERA_SPEED));
    }
    if (m_inputManager.isKeyPressed(SDLK_s)) {
      m_camera.setPosition(m_camera.getPosition() +
                           glm::vec2(0.0f, -CAMERA_SPEED));
    }
    if (m_inputManager.isKeyPressed(SDLK_a)) {
      m_camera.setPosition(m_camera.getPosition() +
                           glm::vec2(-CAMERA_SPEED, 0.0f));
    }
    if (m_inputManager.isKeyPressed(SDLK_d)) {
      m_camera.setPosition(m_camera.getPosition() +
                           glm::vec2(CAMERA_SPEED, 0.0f));
    }
    if (m_inputManager.isKeyPressed(SDLK_q)) {
      m_camera.setScale(m_camera.getScale() + SCALE_SPEED);
    }
    if (m_inputManager.isKeyPressed(SDLK_e)) {
      m_camera.setScale(m_camera.getScale() - SCALE_SPEED);
    }
    if (m_inputManager.isKeyPressed(SDL_BUTTON_LEFT)) {
      glm::vec2 mouseCoords;
      mouseCoords = m_camera.convertScreenToWorld(mouseCoords);

      glm::vec2 playerPosition(0.0f);
      glm::vec2 direction = mouseCoords - playerPosition;
      direction = glm::normalize(direction);

      m_projectiles.emplace_back(playerPosition, direction, 0.15f, 1000);
    }
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
      Engine::ResourceManager::getTexture("../res/char.png");
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
  m_levels.push_back(new Level("../res/level1.txt"));
  initSystems();
  gameLoop();
}

MainGame::~MainGame() {}
