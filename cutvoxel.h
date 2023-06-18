#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include "sculptor.h"
#include "FiguraGeometrica.h"

class CutVoxel : public FiguraGeometrica{
    protected:
        int x, y, z;
    public:
        CutVoxel();
        ~CutVoxel();

        CutVoxel(int x, int y, int z);

        void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
