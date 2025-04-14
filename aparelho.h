#include <iostream>

#ifndef APARELHO_HPP
#define APARELHO_HPP

#include <string>

using namespace std;

class Aparelho {
private:
    
    int imei_1;
    int imei_2;
    string modelo;
    string marca;
    int memoria;
    int deposito;

public:

    void printarDados();
    Aparelho(int imei_1, int imei_2, string modelo, string marca, int memoria);
    Aparelho();

    void setImei1(int imei_1);
    int getImei1();

    void setImei2(int imei_2);
    int getImei2();

    void setModelo(string modelo);
    string getModelo();

    void setMarca(string marca);
    string getMarca();

    void setMemoria(int memoria);
    int getMemoria();
    
};

#endif