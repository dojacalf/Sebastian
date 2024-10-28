using namespace std;
#include <iostream>
#include "Nodo.h"

#include "Arbol.h"

int main()
{
    Arbol *ar = new Arbol();

    ar->insertar_iterativamente(23);
    ar->insertar_iterativamente(14);
    ar->insertar_iterativamente(7);
    ar->insertar_iterativamente(5);
    ar->insertar_iterativamente(31);
    ar->insertar_iterativamente(37);
    ar->insertar_iterativamente(27);

    ar->inorden_iterativamente();
    cout<<endl;

    ar->postOrden();

    return 0;

}