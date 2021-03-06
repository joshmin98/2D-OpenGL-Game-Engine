#include "Window.h"
#include "Errors.h"

namespace Engine {

Window::Window() {}

int Window::createWindow(std::string title, int width, int height,
                         unsigned int currentFlags) {
  m_sdlWindow = SDL_CreateWindow(title.c_str(),
                                 SDL_WINDOWPOS_CENTERED,
                                 SDL_WINDOWPOS_CENTERED,
                                 width, height,
                                 SDL_WINDOW_OPENGL |
                                     SDL_WINDOW_SHOWN |
                                     SDL_WINDOW_INPUT_GRABBED);

  SDL_ShowCursor(SDL_DISABLE);

  if (m_sdlWindow == nullptr) {
    fatalError("SDL Window could not be created!");
  }

  SDL_GLContext glContext = SDL_GL_CreateContext(m_sdlWindow);
  if (glContext == nullptr) {
    fatalError("SDL GL Context could not be created!");
  }

  GLenum error = glewInit();
  if (error != GLEW_OK) {
    fatalError("Could not initialize GLEW!");
  }

  printf("*** OpenGL version: %s ***\n", glGetString(GL_VERSION));

  glClearColor(0.0f, 1.0f, 1.0f, 1.0f);

  // turn on vsync
  SDL_GL_SetSwapInterval(1);

  //enable alpha blending
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

  return 0;
}

void Window::swapBuffer() {
  SDL_GL_SwapWindow(m_sdlWindow);
}

Window::~Window() {}
}
