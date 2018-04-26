#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include "Headers/Shader.hpp"
#include "Headers/Texture.hpp"
#include "Headers/Model.hpp"
#include "Headers/DrawLine.h"

using namespace std;
using namespace glm;

const int width = 800, height = 500;


void KeyCallback(GLFWwindow *window, int key, int scancode, int action, int mode);



int main() {
    if (!glfwInit()) {
        cout << "Init GLFW failed" << endl;
        glfwTerminate();
        return -1;
    }
    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);

    GLFWwindow *pWindow = glfwCreateWindow(width, height, "Graphics Algorithm", nullptr, nullptr);
    if (!pWindow) {
        cout << "Create window failed" << endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(pWindow);

    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK) {
        cout << "Failed to init GLEW" << endl;
        return -1;
    }

    glfwSetKeyCallback(pWindow, KeyCallback);

    glDisable(GL_DEPTH_TEST);

    auto glslShader = Shader("../Shaders/vertexShader.glsl", "../Shaders/fragmentShader.glsl");
    auto glslTex = Texture(width , height);
    auto screen = Model("../Resources/screen.txt");

    while (!glfwWindowShouldClose(pWindow)) {
        glfwPollEvents();

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

        glslShader.use();
        glslTex.Use();
        screen.Use();

        glslTex.ClearPixel();
        DrawLineBresenham(100 , 100 , 700 , 400 , 0 , 255 , 0 , glslTex);
        DrawLineBresenham(100 , 400 , 700 , 100 , 255 , 0 , 0 , glslTex);

        glDrawElements(GL_TRIANGLES , screen.IndexCount() , GL_UNSIGNED_INT , 0);

        glfwSwapBuffers(pWindow);
    }


    glslTex.Release();

    return 0;
}

void KeyCallback(GLFWwindow *window, int key, int scancode, int action, int mode) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, GL_TRUE);
    }
}

