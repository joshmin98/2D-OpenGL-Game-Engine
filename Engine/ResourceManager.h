#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include "TextureCache.h"
#include <string>

namespace Engine {
class ResourceManager {
 public:
  static GLTexture getTexture(std::string texturePath);

 private:
  static TextureCache m_textureCache;
};
}
#endif
