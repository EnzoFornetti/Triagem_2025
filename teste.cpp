#include "Aparelho.h"

using namespace std;

void teste(){

    Aparelho *a1 = new Aparelho(123,124,"Galaxy A06", "Samsung", 128);
    cout << a1->getModelo() << endl << endl;
    a1->printarDados();

    a1->setMemoria(256);
    a1->printarDados();

}