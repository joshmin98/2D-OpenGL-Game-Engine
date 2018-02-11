#ifndef SPRITE_H
#define SPRITE_H

#include "GLTexture.h"
#include <GL/glew.h>
#include <string>

namespace Engine {
class Sprite {
public:
  Sprite();
  ~Sprite();

  void init(float screenX, float screenY, float width, float height, std::string texturePath);
  void draw();

private:
  float m_x, m_y, m_width, m_height;
  GLuint m_vboID;
  GLTexture m_texture;
};
}
#endif
