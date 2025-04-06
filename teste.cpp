#include "PersistenciaAparelho.h"

using namespace std;

void teste(){

    PersistenciaAparelho *p = new PersistenciaAparelho("teste_salvar.txt");

    Aparelho *a1 = new Aparelho(123,124,"Galaxy A06", "Samsung", 128);
    a1->printarDados();

    Aparelho *a2 = new Aparelho(13,14,"Galaxy A26", "Samsung", 256);
    a2->printarDados();

    p->salvar(*a1);
    p->salvar(*a2);

}