/*
 * File   : DrawLine
 * Author : KsGin 
 * Date   : 2018/4/23
 */

#ifndef GRAPHICSALGORITHM_DRAWLINE_H
#define GRAPHICSALGORITHM_DRAWLINE_H


#include "Texture.hpp"

void DrawLineDDA(int x1 , int y1 , int x2 , int y2 ,
                 unsigned char r , unsigned char g , unsigned char b ,
                 Texture& tex){
    int dm = 0;
    if (abs(x2 - x1) >= abs(y2 - y1)){
        dm = abs(x2 - x1);
    } else {
        dm = abs(y2 - y1);
    }
    float dx = (float)(x2 - x1) / dm;
    float dy = (float)(y2 - y1) / dm;
    float x = static_cast<float>(x1 + 0.5);
    float y = static_cast<float>(y1 + 0.5);
    for (int i = 0; i < dm; ++i) {
        tex.SetPixel((int)x , (int)y , r , g , b);
        x += dx;
        y += dy;
    }
}

#endif //GRAPHICSALGORITHM_DRAWLINE_H
