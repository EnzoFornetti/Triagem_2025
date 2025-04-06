#include "PersistenciaAparelho.h"
#include <fstream>
#include <stdexcept>

PersistenciaAparelho::PersistenciaAparelho(std::string nomeArquivo) {
    this->nomeArquivo = nomeArquivo;
}

void PersistenciaAparelho::salvar(Aparelho& aparelho) {
    std::ofstream arquivo(nomeArquivo, std::ios::app); // modo append

    if (!arquivo.is_open()) {
        throw std::runtime_error("Erro ao abrir o arquivo para salvar.");
    }

    arquivo << aparelho.getImei1() << std::endl;
    arquivo << aparelho.getImei2() << std::endl;
    arquivo << aparelho.getModelo() << std::endl;
    arquivo << aparelho.getMarca() << std::endl;
    arquivo << aparelho.getMemoria() << std::endl;
    arquivo << "---" << std::endl; // separador entre aparelhos

    arquivo.close();
}


Aparelho PersistenciaAparelho::carregar() {

    std::ifstream arquivo(nomeArquivo);

    if (!arquivo.is_open()) {
        throw std::runtime_error("Erro ao abrir o arquivo para carregar.");
    }

    int imei1, imei2, memoria;
    std::string modelo, marca;

    arquivo >> imei1;
    arquivo >> imei2;
    arquivo.ignore(); // Pular o '\n' antes das strings
    std::getline(arquivo, modelo);
    std::getline(arquivo, marca);
    arquivo >> memoria;

    arquivo.close();

    return Aparelho(imei1, imei2, modelo, marca, memoria);

}
