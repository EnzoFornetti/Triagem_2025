#include "PersistenciaAparelho.h"
#include <list>

using namespace std;

void teste1()
{

    PersistenciaAparelho *p = new PersistenciaAparelho("teste_salvar.txt");

    // Aparelho *a1 = new Aparelho(1, 0, "Galaxy A54", "Samsung", 128);
    // Aparelho *a2 = new Aparelho(2, 0, "iPhone 15", "Apple", 128);
    // Aparelho *a3 = new Aparelho(3, 0, "iPhone 7", "Apple", 64);

    // a1->printarDados();
    // a2->printarDados();
    // a3->printarDados();

    // p->salvar(*a1);
    // p->salvar(*a2);
    // p->salvar(*a3);

    

    int x = 0;

    
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