#include "Triangle.h"
#include <math.h>

int printTriangleP(struct figure t) {
    double P = sqrt(pow((t.x1 - t.x3), 2) + pow((t.y1 - t.y3), 2)) + sqrt(pow((t.x1 - t.x2), 2) + pow((t.y1 - t.y2), 2)) + sqrt(pow((t.x2 - t.x3), 2) + pow((t.y2 - t.y3), 2));
    return P;
};

int printTriangleS(struct figure t) {
    double cons = 0.5;
    double S = sqrt(pow((t.x1 - t.x3), 2) + pow((t.y1 - t.y3), 2)) * sqrt(pow((t.x1 - t.x2), 2) + pow((t.y1 - t.y2), 2)) * cons;
    return S;
};
struct figure initialize(int x1, int x2, int x3, int y1, int y2, int y3) {
    struct figure t = {
        x1 = x1,
        x2 = x2,
        x3 = x3,
        y1 = y1,
        y2 = y2,
        y3 = y3,
    };
    return t;
};
