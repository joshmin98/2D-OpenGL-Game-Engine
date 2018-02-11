#ifndef WINDOW_H
#define WINDOW_H

#include <GL/glew.h>
#include <SDL2/SDL.h>
#include <string>

namespace Engine {

//use bitwise or to combine
enum windowFlags { INVISIBLE = 0x1, FULLSCREEN = 0x2, BORDERLESS = 0x4};

class Window {
public:
  Window();
  ~Window();

  int createWindow(std::string title, int width, int height, unsigned int currentFlags);
  int getScreenWidth() { return m_width; }
  int getScreenHeight() { return m_height; }
  void swapBuffer();

private:
  SDL_Window *m_sdlWindow;
  int m_width, m_height;
};

}
#endif
