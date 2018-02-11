#include "Camera2D.h"

namespace Engine {

Camera2D::Camera2D()
    : m_screenWidth(800), m_screenHeight(600), m_needsMatrixUpdate(true),
      m_scale(1.0f), m_position(0.0f, 0.0f), m_cameraMatrix(1.0f),
      m_orthoMatrix(1.0f) {}

void Camera2D::setPosition(const glm::vec2 &newPosition) {
  m_position = newPosition;
  m_needsMatrixUpdate = true;
}

void Camera2D::setScale(float newScale) {
  m_scale = newScale;
  m_needsMatrixUpdate = true;
}

void Camera2D::init(int screenWidth, int screenHeight) {
  m_screenWidth = screenWidth;
  m_screenHeight = screenHeight;
  m_orthoMatrix =
      glm::ortho(0.0f, (float)m_screenWidth, 0.0f, (float)m_screenHeight);
}

void Camera2D::update() {
  if (m_needsMatrixUpdate) {
    glm::vec3 translate(-m_position.x + (float)m_screenWidth / 2.0f,
                        -m_position.y + (float)m_screenHeight / 2.0f, 0.0f);
    m_cameraMatrix = glm::translate(m_orthoMatrix, translate);

    glm::vec3 scale(m_scale, m_scale, 0.0f);
    m_cameraMatrix = glm::scale(glm::mat4(1.0f), scale) * m_cameraMatrix;

    m_needsMatrixUpdate = false;
  }
}

glm::vec2 Camera2D::convertScreenToWorld(glm::vec2 screenCoords) {
  screenCoords.y = m_screenHeight - screenCoords.y;
  // center coordinates at the middle of the screen
  screenCoords -= glm::vec2(m_screenWidth / 2, m_screenHeight / 2);
  // scale the coordinates
  screenCoords /= m_scale;
  // translate with the camera position
  screenCoords += m_position;

  return screenCoords;
}

Camera2D::~Camera2D() {}

} // namespace Engine
