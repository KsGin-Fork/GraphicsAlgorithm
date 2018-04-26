/*
 * File   : DrawLine
 * Author : KsGin 
 * Date   : 2018/4/23
 */

#ifndef GRAPHICSALGORITHM_DRAWLINE_H
#define GRAPHICSALGORITHM_DRAWLINE_H

#include "Texture.hpp"

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

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


void DrawLineBresenham(int x1, int y1, int x2, int y2,
               unsigned char r, unsigned char g, unsigned char b,
               Texture &tex) {
    tex.SetPixel(x1, y1, r, g, b);
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    if (dx == 0 && dy == 0) return;
    int flag = 0;
    if (dx < dy) {
        flag = 1;
        swap(x1, y1);
        swap(x2, y2);
        swap(dx, dy);
    }
    int tx = (x2 - x1) > 0 ? 1 : -1;
    int ty = (y2 - y1) > 0 ? 1 : -1;
    int curx = x1;
    int cury = y1;
    int dS = 2 * dy;
    int dT = 2 * (dy - dx);
    int d = dS - dx;
    while (curx != x2) {
        if (d < 0) d += dS;
        else {
            cury += ty;
            d += dT;
        }
        if (flag) tex.SetPixel(cury, curx, r, g, b);
        else tex.SetPixel(curx, cury, r, g, b);
        curx += tx;
    }
}

#endif //GRAPHICSALGORITHM_DRAWLINE_H
