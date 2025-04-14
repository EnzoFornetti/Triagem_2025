#include "Deposito.h"

#include <iostream>
#include <stdexcept>

using namespace std;

Deposito::Deposito(string nome)
{
    this->nomeDeposito = nome;
    quantidade = 0;
    aparelhos = new Aparelho*[100];
}

string Deposito::getNomeDeposito()
{
    return nomeDeposito;
}

void Deposito::setNomeDeposito(string nome)
{
    nomeDeposito = nome;
}

bool Deposito::salvar(Aparelho *aparelho)
{
    aparelhos[quantidade] = aparelho;

    quantidade++;

    return true;
}

void Deposito::printarDeposito()
{

    cout << this->getNomeDeposito() << endl << endl;

    if (quantidade == 0)
    {
        cout << "Nenhum aparelho no depósito." << endl;
        return;
    }

    for (int x = 0; x < quantidade; x++)
    {
        aparelhos[x]->printarDados();
        cout << "----------------" << endl << endl;
    }

    cout << endl;
}