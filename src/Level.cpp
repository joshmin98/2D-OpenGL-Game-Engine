#include "Level.h"
#include <fstream>
#include <Errors.h>

Level::Level(const std::string& fileName) {
  std::ifstream file;
  file.open(fileName);

  if (file.fail()) {
    Engine::fatalError("File failed to open: " + fileName);
  }

  std::string temp;
  file >> temp >> m_numFriendly;

  while (std::getline(file, temp)) {
    m_levelData.push_back(temp);
  }
}

Level::~Level() {

}
