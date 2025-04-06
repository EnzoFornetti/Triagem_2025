#include "aparelho.h"

using namespace std;

void teste(){

    Aparelho *a1 = new Aparelho(123,124,"iPhone 13 Pro Max", "Apple", 128);
    a1->printarDados();
    a1->setImei2(125);
    a1->printarDados();

}