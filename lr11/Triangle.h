#pragma once
#ifndef Triangle
#define Triangle

struct figure {
    int x1, x2, x3;
    int y1, y2, y3;
};

int printTriangleP(struct figure t);
int printTriangleS(struct figure t);

struct figure initialize(int x1, int x2, int x3, int y1, int y2, int y3);

#endif
