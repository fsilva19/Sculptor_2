#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "sculptor.h"

class FiguraGeometrica{
    float area, xcenter, ycenter, r, g, b, a;

public:
    FiguraGeometrica();
    ~FiguraGeometrica();

    virtual void draw(Sculptor &t)=0;
};

#endif // FIGURAGEOMETRICA_H
