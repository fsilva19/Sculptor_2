#ifndef LERDADOS_H
#define LERDADOS_H
#include <vector>
#include <string>
#include "FiguraGeometrica.h"

class LerDados
{
    public:
        LerDados();
        //virtual ~LERDADOS(); // Como o vector já tem o destrutor, não precisamos declará-lo

        vector<FiguraGeometrica*> parse(string filename);
        int getDx();
        int getDy();
        int getDz();

    protected:
        int dx,dy,dz;
        float r,g,b,a;
    private:
};

#endif // LERDADOS_H