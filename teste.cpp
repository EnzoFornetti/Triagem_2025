#include "Deposito.h"
#include <list>

using namespace std;

void teste1()
{

    PersistenciaAparelho *p = new PersistenciaAparelho("teste_salvar.txt");
    Deposito *d1 = new Deposito("Novos Disponiveis");
    Deposito *d2 = new Deposito("Manutencao");

    Aparelho *a1 = new Aparelho(1, 0, "Galaxy A54", "Samsung", 128);
    Aparelho *a2 = new Aparelho(2, 0, "iPhone 15", "Apple", 128);
    Aparelho *a3 = new Aparelho(3, 0, "iPhone 7", "Apple", 64);
    Aparelho *a4 = new Aparelho(3, 0, "Galaxy 23", "Samsung", 256);

    a1->printarDados();
    a2->printarDados();
    a3->printarDados();
    a4->printarDados();

    cout << "aaaaaa" << endl << endl;



    d1->salvar(a1);
    d1->salvar(a3);
    d2->salvar(a2);
    d2->salvar(a4);

    d1->printarDeposito();
    d2->printarDeposito();

    delete p;
    delete d1;
    delete d2;
    
}

void teste2()
{
    try
    {
        PersistenciaAparelho *p = new PersistenciaAparelho("teste_salvar.txt");

        Aparelho *a1 = p->carregar(14);

        a1->printarDados();

        delete a1;
        delete p;
    }
    catch (std::exception *e)
    {
        std::cout << "Erro: " << e->what() << std::endl;
    }
}