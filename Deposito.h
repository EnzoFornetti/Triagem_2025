#ifndef DEPOSITO_H
#define DEPOSITO_H

#include "PersistenciaAparelho.h"
#include <fstream>
#include <string>
#include <list>

using namespace std;

class Deposito
{
private:
    string nomeDeposito;
    int quantidade;
    Aparelho** aparelhos;

public:
    Deposito(string nome);
    string getNomeDeposito();
    void setNomeDeposito(string nome);

    bool salvar(Aparelho *aparelho);
    void printarDeposito();
};

#endif