#include "Aparelho.h"

using namespace std;

Aparelho::Aparelho(int imei1, int imei2, string modelo, string marca, int memoria)
{
    this->imei_1 = imei1;
    this->imei_2 = imei2;
    this->modelo = modelo;
    this->marca = marca;
    this->memoria = memoria;
    this->deposito = 0;
}

Aparelho::Aparelho()
{
    imei_1 = 0;
    imei_2 = 0;
    modelo = "";
    marca = "";
    memoria = 0;
    deposito = 0;
}

void Aparelho::setImei1(int imei_1)
{
    this->imei_1 = imei_1;
}

int Aparelho::getImei1()
{
    return imei_1;
}

void Aparelho::setImei2(int imei_2)
{
    this->imei_2 = imei_2;
}

int Aparelho::getImei2()
{
    return imei_2;
}

void Aparelho::setModelo(string modelo)
{
    this->modelo = modelo;
}

string Aparelho::getModelo()
{
    return modelo;
}

void Aparelho::setMarca(string marca)
{
    this->marca = marca;
}

string Aparelho::getMarca()
{
    return marca;
}

void Aparelho::setMemoria(int memoria)
{
    this->memoria = memoria;
}

int Aparelho::getMemoria()
{
    return memoria;
}

void Aparelho::printarDados()
{

    cout << "===== DADOS DO APARELHO =====" << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "IMEI 1: " << imei_1 << endl;
    cout << "IMEI 2: " << imei_2 << endl;
    cout << "Memoria: " << memoria << " GB" << endl << endl;
}