#include "IOManager.h"
#include <fstream>

namespace Engine {

bool IOManager::readFileToBuffer(std::string filePath,
                                 std::vector<unsigned char> &buffer) {
  std::ifstream file(filePath, std::ios::binary);
  if (file.fail()) {
    perror(filePath.c_str());
    return false;
  }

  // determine file size by putting cursor at end of file, and using tellg to
  // tell how many bytes we passed
  file.seekg(0, std::ios::end);
  int fileSize = file.tellg();
  file.seekg(0, std::ios::beg);

  // removing file header bytes (metadata, etc.)
  fileSize -= file.tellg();

  buffer.resize(fileSize);
  file.read((char *)&(buffer[0]), fileSize);

  file.close();
  return true;
}

} // namespace Engine
