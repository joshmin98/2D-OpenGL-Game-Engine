#include "GLSLProgram.h"
#include "Errors.h"
#include <fstream>
#include <vector>

namespace Engine {
GLSLProgram::GLSLProgram()
    : m_numAttributes(0), m_programID(0), m_vertexShaderID(0),
      m_fragmentShaderID(0) {}

void GLSLProgram::compileShaders(const std::string &vertexFilePath,
                                 const std::string &fragmentFilePath) {
  m_programID = glCreateProgram();
  m_vertexShaderID = glCreateShader(GL_VERTEX_SHADER);
  if (m_vertexShaderID == 0) {
    fatalError("Vertex shader failed to be created!");
  }

  m_fragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);
  if (m_fragmentShaderID == 0) {
    fatalError("Fragment shader failed to be created!");
  }

  compileShader(vertexFilePath, m_vertexShaderID);
  compileShader(fragmentFilePath, m_fragmentShaderID);
}

void GLSLProgram::linkShaders() {
  glAttachShader(m_programID, m_vertexShaderID);
  glAttachShader(m_programID, m_fragmentShaderID);

  glLinkProgram(m_programID);

  GLint isLinked = 0;
  glGetProgramiv(m_programID, GL_LINK_STATUS, (int *)&isLinked);
  if (isLinked == GL_FALSE) {
    GLint maxLength = 0;
    glGetProgramiv(m_programID, GL_INFO_LOG_LENGTH, &maxLength);

    std::vector<char> infoLog(maxLength);
    glGetProgramInfoLog(m_programID, maxLength, &maxLength, &infoLog[0]);

    glDeleteProgram(m_programID);
    glDeleteShader(m_vertexShaderID);
    glDeleteShader(m_fragmentShaderID);

    std::printf("%s\n", &infoLog[0]);
    fatalError("Shaders failed to link!");

    return;
  }

  glDetachShader(m_programID, m_vertexShaderID);
  glDetachShader(m_programID, m_fragmentShaderID);
}

void GLSLProgram::addAttribute(const std::string &attributeName) {
  glBindAttribLocation(m_programID, m_numAttributes++, attributeName.c_str());
}

void GLSLProgram::compileShader(const std::string &filePath, GLuint id) {
  std::ifstream shaderFile(filePath.c_str());
  if (shaderFile.fail()) {
    perror(filePath.c_str());
    fatalError("Failed to open" + filePath);
  }

  std::string fileContents = "";
  std::string line;

  while (std::getline(shaderFile, line)) {
    fileContents += line + "\n";
  }

  shaderFile.close();

  const char *fileContentsPtr = fileContents.c_str();
  glShaderSource(id, 1, &fileContentsPtr, NULL);

  glCompileShader(id);

  GLint success = 0;
  glGetShaderiv(id, GL_COMPILE_STATUS, &success);
  if (success == GL_FALSE) {
    GLint maxLength = 0;
    glGetShaderiv(id, GL_INFO_LOG_LENGTH, &maxLength);

    std::vector<char> errorLog(maxLength);
    glGetShaderInfoLog(id, maxLength, &maxLength, &errorLog[0]);
    fatalError("Shader " + filePath + " failed to compile!");
    std::printf("&s\n", &errorLog[0]);
    glDeleteShader(id);

    return;
  }
}

GLint GLSLProgram::getUniformLocation(const std::string &uniformName) {
  GLint location = glGetUniformLocation(m_programID, uniformName.c_str());
  if (location == GL_INVALID_INDEX) {
    fatalError("Uniform " + uniformName + " not found in shader!");
  }
  return location;
}

void GLSLProgram::use() {
  glUseProgram(m_programID);
  for (int i = 0; i < m_numAttributes; ++i) {
    glEnableVertexAttribArray(i);
  }
}

void GLSLProgram::unUse() {
  glUseProgram(0);
  for (int i = 0; i < m_numAttributes; ++i) {
    glDisableVertexAttribArray(i);
  }
}

GLSLProgram::~GLSLProgram() {}
}
