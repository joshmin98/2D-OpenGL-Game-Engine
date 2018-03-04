#include <vector>
#include "InputManager.h"

namespace Engine {

  InputManager::InputManager() {
  }

  InputManager::~InputManager() {
  }

  void InputManager::keyboardKeyPressed(SDL_Keycode keyID) { m_keyboardKeys[keyID] = true;}

  void InputManager::keyboardKeyReleased(SDL_Keycode keyID) { m_keyboardKeys[keyID] = false; }

  bool InputManager::isKeyboardKeyPressed(SDL_Keycode keyID) {
    auto it = m_keyboardKeys.find(keyID);
    if (it != m_keyboardKeys.end()) {
      return it->second;
    } else {
      return false;
    }
  }

  void InputManager::handleKeyboardInput() {
    SDL_Event e{};
    while(SDL_PollEvent(&e)) {
      switch (e.type) {
        case SDL_KEYDOWN: {
          keyboardKeyPressed(e.key.keysym.sym);
          break;
        }
        case SDL_KEYUP: {
          keyboardKeyReleased(e.key.keysym.sym);
          break;
        }
        case SDL_MOUSEBUTTONDOWN: {
          keyboardKeyPressed(e.button.button);
          break;
        }
        case SDL_MOUSEBUTTONUP: {
          keyboardKeyReleased(e.button.button);
          break;
        }
        default:
          break;
      }
    }
  }

  bool InputManager::isQuitButtonPressed() {
    return isKeyboardKeyPressed(SDLK_q);
  }

  bool InputManager::isUpButtonPressed() {
    return isKeyboardKeyPressed(SDLK_w);
  }

  bool InputManager::isDownButtonPressed() {
    return isKeyboardKeyPressed(SDLK_s);
  }

  bool InputManager::isLeftButtonPressed() {
    return isKeyboardKeyPressed(SDLK_a);
  }

  bool InputManager::isRightButtonPressed() {
    return isKeyboardKeyPressed(SDLK_d);
  }


} // namespace Engine
