#include "TextureCache.h"
#include "ImageLoader.h"

namespace Engine{
TextureCache::TextureCache() {}

GLTexture TextureCache::getTexture(std::string texturePath) {
  // lookup texture and see if it's in the map
  auto mit = m_textureMap.find(texturePath);

  // check if texture is in the map
  if (mit == m_textureMap.end()) {
    GLTexture newTexture = ImageLoader::loadPNG(texturePath);

    // insert it into the texture map
    m_textureMap.insert(make_pair(texturePath, newTexture));
    return newTexture;
  }

  return mit->second;
}

TextureCache::~TextureCache() {}
}
