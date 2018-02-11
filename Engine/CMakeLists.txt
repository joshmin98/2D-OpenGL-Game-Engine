file(GLOB SRCS *.cpp *.h)
SET(LIB_TYPE STATIC)
set(CMAKE_CXX_STANDARD 11)

add_library (Engine ${LIB_TYPE} ${SRCS})
