#ifndef PERSISTENCIAAPARELHO_H
#define PERSISTENCIAAPARELHO_H

#include "Aparelho.h"
#include <fstream>
#include <string>

class PersistenciaAparelho {
private:
    std::string nomeArquivo;

public:
    PersistenciaAparelho(std::string nomeArquivo);

    void salvar(Aparelho &aparelho);
    Aparelho carregar();
};

#endif