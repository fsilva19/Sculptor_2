#ifndef LERDADOS_H
#define LERDADOS_H
#include <vector>
#include <string>
#include "FiguraGeometrica.h"

class LerDados{
    protected:
        int lar, alt, prof;
        float r,g,b,a;
    public:
        LerDados();

        vector<FiguraGeometrica*> parse(string arquivo);
        int largura();
        int altura();
        int profundidade();
};

#endif // LERDADOS_H
