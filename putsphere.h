#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "sculptor.h"
#include "FiguraGeometrica.h"


class PutSphere: public FiguraGeometrica{
    protected:
        int xcenter,ycenter,zcenter,radius;
    public:
        PutSphere();
        ~PutSphere();

        PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);

        void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
