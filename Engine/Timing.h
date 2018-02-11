#ifndef TIMING_H
#define TIMING_H

namespace Engine {

class FpsLimiter {
public:
  FpsLimiter();
  void setMaxFPS(float maxFPS);
  void init(float maxFPS);
  void begin();

  // end will return current FPS
  float end();

private:
  void calculateFPS();

  float m_fps;
  float m_maxFPS;
  float m_frameTime;
  unsigned int m_startTicks;
};

} // namespace Engine

#endif
