#ifndef SPRITEBATCH_H
#define SPRITEBATCH_H

#include "Vertex.h"
#include <GL/glew.h>
#include <algorithm>
#include <glm/glm.hpp>
#include <vector>

namespace Engine {

enum class GlyphSortType { NONE, FRONT_TO_BACK, BACK_TO_FRONT, TEXTURE };

// single sprite + depth data
struct Glyph {
  GLuint texture;
  float depth;

  Vertex topLeft;
  Vertex bottomLeft;
  Vertex topRight;
  Vertex bottomRight;
};

class RenderBatch {
public:
  RenderBatch(GLuint Offset, GLuint NumVertices, GLuint Texture)
      : offset(Offset), numVertices(NumVertices), texture(Texture){};
  GLuint offset;
  GLuint numVertices;
  GLuint texture;
};

class SpriteBatch {
public:
  SpriteBatch();
  ~SpriteBatch();

  void init();
  void begin(GlyphSortType sortType = GlyphSortType::TEXTURE);
  void end();

  void draw(const glm::vec4 &destRect, const glm::vec4 &uvRect, GLuint texture,
            float depth, const Color &color);

  void renderBatch();

private:
  GLuint m_vbo;
  GLuint m_vao;

  std::vector<Glyph*> m_glyphs;
  std::vector<RenderBatch> m_renderBatches;

  void createRenderBatches();
  void createVertexArray();
  void sortGlyphs();

  static bool compareFrontToBack(Glyph *a, Glyph *b);
  static bool compareBackToFront(Glyph *a, Glyph *b);
  static bool compareTexture(Glyph *a, Glyph *b);

  GlyphSortType m_sortType;
};

} // namespace Engine

#endif
