#include <iostream>

#ifndef APARELHO_HPP
#define APARELHO_HPP

#include <string>

class Aparelho {
private:
    
    int imei_1;
    int imei_2;
    std::string modelo;
    std::string marca;
    int memoria; // sasasas

public:

    void printarDados();
    Aparelho(int imei_1, int imei_2, std::string modelo, std::string marca, int memoria);

    void setImei1(int imei_1);
    int getImei1();

    void setImei2(int imei_2);
    int getImei2();

    void setModelo(std::string modelo);
    std::string getModelo();

    void setMarca(std::string marca);
    std::string getMarca();

    void setMemoria(int memoria);
    int getMemoria();
    
};

#endif