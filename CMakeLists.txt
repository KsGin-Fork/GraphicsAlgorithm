cmake_minimum_required(VERSION 3.10)
project(GraphicsAlgorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(
        GraphicsAlgorithm main.cpp
        Headers/Shader.hpp
        Headers/Texture.hpp
        Headers/Model.hpp)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -framework OPENGL")

target_link_libraries(GraphicsAlgorithm /usr/local/lib/libglfw.dylib)

target_link_libraries(GraphicsAlgorithm /usr/local/lib/libGLEW.dylib)