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
#include "putellipsoid.h"
#include "cutellipsoid.h"

int main() {
    std::ifstream arquivo("arquivo.txt");  // Abre o arquivo para leitura
    std::vector<std::vector<std::string>> linhas;
    if (arquivo.is_open()) {
        std::string linha;

        // Lê o conteúdo do arquivo linha por linha
        while (std::getline(arquivo, linha)) {
            std::istringstream iss(linha);
            std::vector<std::string> palavras;
            std::string palavra;
            while (iss >> palavra) {
                palavras.push_back(palavra);
            }
            // adiciona a linha no formato de lista, onde cada elemento é definido a partir do "space" entre uma palavra
            // e outra.
            linhas.push_back(palavras);

        }
        // Laço abaixo identifica qual a função que está sendo solicitada no arquivo. 
        for(size_t i = 0; i < linhas.size(); i++){
            auto funcao= linhas[i][0];
            if (funcao == "dim"){
            
            }
            if (funcao == "putvoxel"){

            }
            if (funcao == "cutvoxel"){

            }
            if (funcao == "putbox"){

            }
            if (funcao == "cutbox"){

            }
            if (funcao == "putsphere"){
                
            }
            if (funcao == "cutsphere"){
                
            }
            if (funcao == "putellipsoid"){
                
            }
            if (funcao == "cutellipsoid"){
                
            }
        }
    
        arquivo.close();  // Fecha o arquivo após a leitura
    } else {
        std::cout << "Falha ao abrir o arquivo." << std::endl;
    }

    return 0;
}
