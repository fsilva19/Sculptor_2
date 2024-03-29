#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "sculptor.h"
#include "FiguraGeometrica.h"


class PutEllipsoid: public FiguraGeometrica{
    protected:
        int xcenter,ycenter,zcenter,rx,ry,rz;

    public:
        PutEllipsoid();
        ~PutEllipsoid();

        PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);

        void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
