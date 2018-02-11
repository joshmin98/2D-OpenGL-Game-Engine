#ifndef PROJECTILE_H
#define PROJECTILE_H

#include <SpriteBatch.h>
#include <glm/glm.hpp>

class Projectile {
public:
  Projectile(glm::vec2 pos, glm::vec2 dir, float speed, int lifeTime);
  ~Projectile();

  void draw(Engine::SpriteBatch &spriteBatch);
  // returns true when projectile should be destroyed
  bool update();

private:
  int m_lifeTime;
  float m_speed;
  glm::vec2 m_direction;
  glm::vec2 m_position;
};

#endif
