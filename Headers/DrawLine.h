/*
 * File   : DrawLine
 * Author : KsGin 
 * Date   : 2018/4/23
 */

#ifndef GRAPHICSALGORITHM_DRAWLINE_H
#define GRAPHICSALGORITHM_DRAWLINE_H


#include "Texture.hpp"

void DrawLineDDA(int x1, int y1, int x2, int y2,
                 unsigned char r, unsigned char g, unsigned char b,
                 Texture &tex) {
    int dm = 0;
    if (abs(x2 - x1) >= abs(y2 - y1)) {
        dm = abs(x2 - x1);
    } else {
        dm = abs(y2 - y1);
    }
    float dx = (float) (x2 - x1) / dm;
    float dy = (float) (y2 - y1) / dm;
    float x = static_cast<float>(x1 + 0.5);
    float y = static_cast<float>(y1 + 0.5);
    for (int i = 0; i < dm; ++i) {
        tex.SetPixel((int) x, (int) y, r, g, b);
        x += dx;
        y += dy;
    }
}


void DrawLinePTP(int x1, int y1, int x2, int y2,
                 unsigned char r, unsigned char g, unsigned char b,
                 Texture &tex) {
    int x, y, xA, yA;
    if (y1 > y2) {
        yA = y1 - y2;
        xA = x1 - x2;
    } else {
        yA = y2 - y1;
        xA = x2 - x1;
    }
    int f = x = y = 0;
    int n = abs(xA) + abs(yA);

    for (int i = 0; i < n; ++i) {
        if (xA > 0) {
            if (f >= 0) {
                ++x;
                f -= yA;
            } else {
                ++y;
                f += xA;
            }
        } else {
            if (f >= 0) {
                ++y;
                f += xA;
            } else {
                --x;
                f += yA;
            }
        }
        if (y1 > y2) tex.SetPixel(x + x2, y + y2, r, g, b);
        else tex.SetPixel(x + x1, y + y1, r, g, b);
    }
}

#endif //GRAPHICSALGORITHM_DRAWLINE_H
