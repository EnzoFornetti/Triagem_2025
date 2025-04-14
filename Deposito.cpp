#include "Deposito.h"

#include <iostream>
#include <stdexcept>

using namespace std;

Deposito::Deposito(string nome)
{
    this->nomeDeposito = nome;
    quantidade = 0;
    aparelhos = new list<Aparelho>();
}

string Deposito::getNomeDeposito()
{
    return nomeDeposito;
}

void Deposito::setNomeDeposito(string nome)
{
    nomeDeposito = nome;
}

bool Deposito::salvar(Aparelho &aparelho)
{
    aparelhos->push_back(aparelho);

    quantidade++;

    return true;
}

void Deposito::printarDeposito()
{

    cout << this->getNomeDeposito() << endl << endl;

    for (int x = 0; x < quantidade; x++)
    {
        cout << aparelhos[x]->printarDados() << endl;
    }

    cout << endl;
}