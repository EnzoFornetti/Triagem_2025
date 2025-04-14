#include "PersistenciaAparelho.h"
#include <fstream>
#include <stdexcept>

#include <string>

PersistenciaAparelho::PersistenciaAparelho(std::string nomeArquivo)
{
    this->nomeArquivo = nomeArquivo;
}

bool PersistenciaAparelho::salvar(Aparelho &aparelho)
{
    std::ofstream arquivo(nomeArquivo, std::ios::app); // modo append

    if (!arquivo.is_open())
    {
        throw std::runtime_error("Erro ao abrir o arquivo para salvar.");
        return false;
    }

    arquivo << aparelho.getImei1() << std::endl;
    arquivo << aparelho.getImei2() << std::endl;
    arquivo << aparelho.getModelo() << std::endl;
    arquivo << aparelho.getMarca() << std::endl;
    arquivo << aparelho.getMemoria() << std::endl;
    arquivo << "---" << std::endl; // separador entre aparelhos

    arquivo.close();
    return true;
}

Aparelho *PersistenciaAparelho::carregar(int n)
{
    std::ifstream arquivo(nomeArquivo);

    if (!arquivo.is_open())
    {
        throw std::runtime_error("Erro ao abrir o arquivo para carregar.");
    }

    int imei1, imei2, memoria;
    std::string modelo, marca;
    std::string linhaSeparadora;

    while (arquivo >> imei1)
    {
        arquivo >> imei2;
        arquivo.ignore(); // Limpar o '\n' depois dos ints
        std::getline(arquivo, modelo);
        std::getline(arquivo, marca);
        arquivo >> memoria;
        std::getline(arquivo, linhaSeparadora); // ler o '\n' após memoria
        std::getline(arquivo, linhaSeparadora); // ler "---"

        // Comparar com o IMEI desejado
        if (imei1 == n)
        {
            arquivo.close();
            return new Aparelho(imei1, imei2, modelo, marca, memoria);
        }
    }

    arquivo.close();
    throw std::runtime_error("Aparelho com o IMEI informado nao encontrado.");
}
