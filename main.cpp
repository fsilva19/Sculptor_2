#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Sculptor.h"
#include "lerDados.h"

using namespace std;

int main(){
    Sculptor *teste;
    LerDados leitura;
    vector<FiguraGeometrica*> linhas;

    linhas = leitura.parse("texto.txt");

    teste = new Sculptor(leitura.altura(), leitura.largura(), leitura.profundidade());

    for(size_t i = 0; i < linhas.size(); i++){
        linhas[i] -> draw(*teste);
    }

    teste -> writeOFF((char*)"nave.off");

    for(size_t i = 0; i < linhas.size(); i++){
        delete linhas[i];
    }

    delete teste;

    return 0;
}
