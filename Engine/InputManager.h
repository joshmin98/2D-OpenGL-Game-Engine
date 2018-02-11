#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <unordered_map>
#include <glm/glm.hpp>

namespace Engine {

class InputManager {
public:
  InputManager();
  ~InputManager();

  void pressKey(unsigned int keyID);
  void releaseKey(unsigned int keyID);
  bool isKeyPressed(unsigned int keyID);
  void setMouseCoords(float x, float y);

  glm::vec2 getMouseCoords() const { return m_mouseCoords; }

private:
  std::unordered_map<unsigned int, bool> m_keyMap;
  glm::vec2 m_mouseCoords;
};

} // namespace Engine
#endif
