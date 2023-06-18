#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "sculptor.h"
#include "FiguraGeometrica.h"

class CutEllipsoid: public FiguraGeometrica{
    protected:
        int xcenter, ycenter, zcenter, rx, ry, rz;
    public:
        CutEllipsoid();
        ~CutEllipsoid();

        CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

        void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
