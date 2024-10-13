#include <iostream>
#include <fstream>
//<node>: setnext,getval,getnext
#include <stack> //push,pop,top,empty,size
#include <queue> //push,pop,front,back,empty,size

using namespace std;
class viaje
{
private:
    float tam;
    string dir;

public:
    viaje(float t, string d)
    {
        tam = t;
        dir = d;
    }
    float eltam()
    {
        return tam;
    }
    string ladir()
    {
        return dir;
    }
};

int main()
{
    ifstream in;
    in.open("input.txt");
    
    in.close();
    return 0;
}

/*
int* ptr
num = 10
ptr = &num

num -> bota el valor de num
*ptr ->bota el valor dentro de ptr
ptr -> bota una ubicacion xd
&num  -> es la ubicacion donde esta num

int *ptr = new int; -> sirve para crear puntero sin usar otra variable
fun(int *a)-> el parametro es un puntero

*fuc(){return a} -> a:puntero *a:valor dentro de a

    ifstream input;
    input.open("input.txt");
    int a;
    input >> a;
    cout << a;

    input.close();
*/
