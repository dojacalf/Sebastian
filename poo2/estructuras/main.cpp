#include <fstream>
#include <string>
#include "nodo.h"
#include "pila.h"
#include "lista.h"
#include "cola.h"

int main()
{
    std::fstream out;
    std::fstream in;
    in.open("input.txt", std::ios::in);
    out.open("output.txt", std::ios::out);

    cola *nums = new cola;
    nums->agregar(4);
    nums->agregar(5);
    nums->agregar(12);
    
    out.close();
    in.close();
    return 0;
}
