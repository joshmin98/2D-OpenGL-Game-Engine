#include "MainGame.h"
#include <iostream>

int main(int argc, char** argv) {
  MainGame *mainGame = new MainGame();
  mainGame->run();
  delete mainGame;
  mainGame = nullptr;
  return 0;
}
