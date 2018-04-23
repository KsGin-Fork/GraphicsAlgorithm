/*
 * File   : Texture
 * Author : KsGin 
 * Date   : 2018/4/17
 */

#ifndef GRAPHICSALGORITHM_TEXTURE_HPP
#define GRAPHICSALGORITHM_TEXTURE_HPP


#include <string>
#include <GL/glew.h>
#include <iostream>


class Texture {
public:
    unsigned int ID;
    unsigned char *data;
    int width, height;

    Texture(int w, int h) {
        glGenTextures(1, &ID);
        glBindTexture(GL_TEXTURE_2D, ID);

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_R, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

        width = w;
        height = h;
        data = new unsigned char[w * h * 3];
        memset(data, 0, sizeof(unsigned char) * 3 * height * width);
    }

    void UpdateTexture() {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
    }

    void Use() {
        glBindTexture(GL_TEXTURE_2D, ID);
    }

    void ClearPixel(){
        memset(data, 0, sizeof(unsigned char) * 3 * height * width);
    }

    void SetPixel(int w, int h, unsigned char r, unsigned char g, unsigned char b) {
        data[width * (h - 1) * 3 + w * 3 - 2] = r;
        data[width * (h - 1) * 3 + w * 3 - 1] = g;
        data[width * (h - 1) * 3 + w * 3 - 0] = b;
        Use();
        UpdateTexture();
    }

    void Release(){
        delete[] data;
    }
};


#endif
