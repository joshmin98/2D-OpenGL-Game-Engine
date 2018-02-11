#ifndef LEVEL_H
#define LEVEL_H

#include <string>
#include <vector>

class Level {
public:
  Level(const std::string& fileName);
  ~Level();

private:
  std::vector<std::string> m_levelData;
  int m_numFriendly;
};

#endif
