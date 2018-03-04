#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include <unordered_map>
#include <glm/glm.hpp>
#include <SDL2/SDL.h>



namespace Engine {

class InputManager {
public:
  InputManager();
  ~InputManager();

  void handleKeyboardInput();
  bool isKeyboardKeyPressed(SDL_Keycode keyID);

  bool isUpButtonPressed();
  bool isDownButtonPressed();
  bool isLeftButtonPressed();
  bool isRightButtonPressed();

  // TODO: temporarily - just for quick exit
  bool isQuitButtonPressed();

private:
  void keyboardKeyPressed(SDL_Keycode keyID);
  void keyboardKeyReleased(SDL_Keycode keyID);

  std::unordered_map<SDL_Keycode, bool> m_keyboardKeys;
};

} // namespace Engine
#endif
