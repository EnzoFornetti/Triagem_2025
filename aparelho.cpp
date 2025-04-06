#include "aparelho.h"

Aparelho::Aparelho(int imei1, int imei2, std::string modelo, std::string marca, int memoria) {
    this->imei_1 = imei1;
    this->imei_2 = imei2;
    this->modelo = modelo;
    this->marca = marca;
    this->memoria = memoria;
}

void Aparelho::setImei1(int imei_1) {
    this->imei_1 = imei_1;
}

int Aparelho::getImei1() {
    return imei_1;
}

void Aparelho::setImei2(int imei_2) {
    this->imei_2 = imei_2;
}

int Aparelho::getImei2() {
    return imei_2;
}

void Aparelho::setModelo(std::string modelo) {
    this->modelo = modelo;
}

std::string Aparelho::getModelo() {
    return modelo;
}

void Aparelho::setMarca(std::string marca) {
    this->marca = marca;
}

std::string Aparelho::getMarca() {
    return marca;
}

void Aparelho::setMemoria(int memoria) {
    this->memoria = memoria;
}

int Aparelho::getMemoria() {
    return memoria;
}

void Aparelho::printarDados() {

    std::cout << "===== DADOS DO APARELHO =====" << std::endl;
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
    std::cout << "IMEI 1: " << imei_1 << std::endl;
    std::cout << "IMEI 2: " << imei_2 << std::endl;
    std::cout << "Memoria: " << memoria << " GB" << std::endl;

}