#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "sculptor.h"
#include "FiguraGeometrica.h"


class CutSphere: public FiguraGeometrica{
    private:
        int xcenter,ycenter,zcenter,radius;
    public:
        CutSphere();
        ~CutSphere();

        CutSphere(int xcenter, int ycenter, int zcenter, int radius);

        void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
