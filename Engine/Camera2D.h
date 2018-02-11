#ifndef CAMERA2D_H
#define CAMERA2D_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

namespace Engine {

class Camera2D {
public:
  Camera2D();
  ~Camera2D();

  void init(int screenWidth, int screenHeight);
  void update();

  glm::vec2 convertScreenToWorld(glm::vec2 screenCoords);

  void setPosition(const glm::vec2 &newPosition);
  glm::vec2 getPosition() { return m_position; }

  void setScale(float newScale);
  float getScale() { return m_scale; }

  glm::mat4 getCameraMatrix() { return m_cameraMatrix; }

private:
  int m_screenWidth, m_screenHeight;
  bool m_needsMatrixUpdate;
  float m_scale;
  glm::vec2 m_position;
  glm::mat4 m_cameraMatrix;
  glm::mat4 m_orthoMatrix;
};

} // namespace Engine

#endif
