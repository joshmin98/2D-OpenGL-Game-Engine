#include "Errors.h"

#include <SDL2/SDL.h>
#include <cstdlib>
#include <iostream>

namespace Engine {

void fatalError(std::string errorString) {
  std::cerr << errorString << std::endl;
  std::cout << "Enter any key to quit" << std::endl;
  int tmp;
  std::cin >> tmp;
  SDL_Quit();
  exit(1);
}

} // namespace Engine
