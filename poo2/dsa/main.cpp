#include<fstream>
#include<string>
#include "nodo.h"
#include "pila.h"

int main(){
    std::fstream output;
    std::fstream input;
    input.open("input.txt",std::ios::in);
    output.open("output.txt",std::ios::out);

    int size;
    input >> size;
    int a,b,sum;
    for(int i = 0;i<size;i++){
    input >> a>>b;
    sum = a+b;
    output << sum <<std::endl;
   }

    output.close();
    input.close();
    return 0;
}
