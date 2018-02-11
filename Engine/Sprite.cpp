#include "Sprite.h"
#include "ResourceManager.h"
#include "Vertex.h"

#include <cstddef>

namespace Engine {
Sprite::Sprite() { m_vboID = 0; }

void Sprite::init(float screenX, float screenY, float width, float height,
                  std::string texturePath) {
  m_x = screenX;
  m_y = screenY;
  m_width = width;
  m_height = height;

  m_texture = ResourceManager::getTexture(texturePath);

  if (m_vboID == 0) {
    glGenBuffers(1, &m_vboID);
  }

  Vertex vertexData[6];

  // first triangle
  vertexData[0].setPosition(screenX + width, screenY + height);
  vertexData[0].setUV(1.0f, 1.0f);

  vertexData[1].setPosition(screenX, screenY + height);
  vertexData[1].setUV(0.0f, 1.0f);

  vertexData[2].setPosition(screenX, screenY);
  vertexData[2].setUV(0.0f, 0.0f);

  // second triangle
  vertexData[3].setPosition(screenX, screenY);
  vertexData[3].setUV(0.0f, 0.0f);

  vertexData[4].setPosition(screenX + width, screenY);
  vertexData[4].setUV(1.0f, 0.0f);

  vertexData[5].setPosition(screenX + width, screenY + height);
  vertexData[5].setUV(1.0f, 1.0f);

  // Setting vertex colors
  for (unsigned int i = 0; i < 6; ++i) {
    vertexData[i].setColor(255, 0, 255, 255);
  }

  // Changing some colors
  vertexData[1].setColor(0, 0, 255, 255);

  // Changing some colors
  vertexData[4].setColor(0, 255, 0, 255);

  // Binding and uploading buffer
  glBindBuffer(GL_ARRAY_BUFFER, m_vboID);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertexData), vertexData, GL_STATIC_DRAW);

  // Binding the buffer to '0' once done- acts as 'unbinding' the buffer
  glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void Sprite::draw() {
  glBindTexture(GL_TEXTURE_2D, m_texture.id);

  glBindBuffer(GL_ARRAY_BUFFER, m_vboID);

  glDrawArrays(GL_TRIANGLES, 0, 6);

  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(2);

  glBindBuffer(GL_ARRAY_BUFFER, m_vboID);
}

Sprite::~Sprite() {
  // Free allocated vertex bufffer
  if (m_vboID != 0) {
    glDeleteBuffers(1, &m_vboID);
  }
}
} // namespace Engine
