#ifndef GLSLPROGRAM_H
#define GLSLPROGRAM_H

#include <string>
#include <GL/glew.h>

namespace Engine {
class GLSLProgram {
public:
  GLSLProgram();
  ~GLSLProgram();

  void compileShaders(const std::string& vertexFilePath, const std::string& fragmentFilePath);
  void linkShaders();
  void addAttribute(const std::string& attributeName);
  GLint getUniformLocation(const std::string& uniformName);
  void use();
  void unUse();
  
private:
  void compileShader(const std::string& filePath, GLuint id);

  int m_numAttributes;
  GLuint m_programID;
  GLuint m_vertexShaderID;
  GLuint m_fragmentShaderID;
};
}
#endif
