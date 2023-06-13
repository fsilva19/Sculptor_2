#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageometrica.h"

class putvoxel : public FiguraGeometrica
{
private:
    int x, y, z;
    float r, g, b, a;
public:
    putvoxel();
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
