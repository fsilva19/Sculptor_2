#include "lerDados.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "sculptor.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"


LerDados::LerDados(){

}

vector<FiguraGeometrica*> LerDados::parse(string arquivo){
    std::vector<FiguraGeometrica*> linhas; // cria um vector de ponteiros para FiguraGeometrica
    std::ifstream file; //cria a chamada do file

    string t, comparacao;
    stringstream ino;

    file.open(arquivo); //abre o arquivo de variável "arquivo"

    if(!file.is_open()){ //testa se tem erro
        cout << "O arquivo " << arquivo << " não abriu com sucesso!" << endl;
        exit(0);
    }

    while(file.good()){
        getline(file, t);
        ino.clear();
        ino.str(t);
        ino >> comparacao;

        if(ino.good()){
            if(comparacao.compare("dim")){
                ino >> lar >> alt >> prof;
            }
            else if(comparacao.compare("putvoxel")){
                int x0,y0,z0;
                ino >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                linhas.push_back(new putvoxel(x0,y0,z0,r,g,b,a));
            }
            else if(comparacao.compare("cutvoxel")){
                int x0,y0,z0;
                ino >> x0 >> y0 >> z0;
                linhas.push_back(new CutVoxel(x0,y0,z0));
            }
            else if(comparacao.compare("putbox")){
                int x0,x1,y0,y1,z0,z1;
                ino >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                linhas.push_back(new PutBox(x0,x1,y0,y1,z0,z1,r,g,b,a));
            }
            else if(comparacao.compare("cutbox")){
                int x0,x1,y0,y1,z0,z1;
                ino >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                linhas.push_back(new CutBox(x0,x1,y0,y1,z0,z1));
            }
            else if(comparacao.compare("putsphere")){
                int xcenter, ycenter, zcenter, radius;
                ino >> xcenter >> ycenter >> zcenter >> radius >> r >> g >> b >> a;
                linhas.push_back(new PutSphere(xcenter,ycenter,zcenter,radius,r,g,b,a));
            }
            else if(comparacao.compare("cutbox")){
                int xcenter, ycenter, zcenter, radius;
                ino >> xcenter >> ycenter >> zcenter >> radius;
                linhas.push_back(new CutSphere(xcenter,ycenter,zcenter,radius));
            }
            else if(comparacao.compare("putellipsoid")){
                int xcenter, ycenter, zcenter, rx, ry, rz;
                ino >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
                linhas.push_back(new PutEllipsoid(xcenter,ycenter,zcenter,rx,ry,rz,r,g,b,a));
            }
            else if(comparacao.compare("cutellipsoid")){
                int xcenter, ycenter, zcenter, rx, ry, rz;
                ino >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz;
                linhas.push_back(new CutEllipsoid(xcenter,ycenter,zcenter,rx,ry,rz));
            }
        }
    }
    file.close();
    cout << "Arquivo gravado com sucesso!" << endl;
    return(linhas);
}

int LerDados::largura(){
    return lar;
}

int LerDados::altura(){
    return alt;
}

int LerDados::profundidade(){
    return prof;
}
