#ifndef TEXTURECACHE_H
#define TEXTURECACHE_H

#include "GLTexture.h"
#include <string>
#include <map>

namespace Engine {
class TextureCache {
 public:
  TextureCache();
  ~TextureCache();

  GLTexture getTexture(std::string texturePath);

 private:
  std::map<std::string, GLTexture> m_textureMap;
};
}
#endif
