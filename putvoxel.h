#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "sculptor.h"
#include "figurageometrica.h"

class putvoxel : public FiguraGeometrica{
    protected:
        int x, y, z;
        float r, g, b, a;
    public:
        putvoxel();
        ~putvoxel();

        putvoxel(int x, int y, int z, int r, int g, int b, int a);

        void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
