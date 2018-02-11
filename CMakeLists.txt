cmake_minimum_required(VERSION 3.5)
project(GameProject)

set(CMAKE_CXX_FLAGS "-Wall -g -std=c++11")
set(ENGINE_INCLUDE_DIR
	${CMAKE_CURRENT_SOURCE_DIR}/Engine)
add_subdirectory(Engine)

file(GLOB SRC src/*.cpp)
file(GLOB INC src/*.h)

include_directories(${ENGINE_INCLUDE_DIR})

add_executable(game ${SRC} ${INC})
target_link_libraries(game Engine -lSDL2 -lGL -lGLEW)

add_dependencies(game Engine)
