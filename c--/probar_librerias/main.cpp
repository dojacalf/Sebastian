#include <iostream>
using namespace std;

class Nodo{
    private:
        int dato;
        Nodo *sig;
    public:
        Nodo(int v){
            dato = v;
            sig = NULL;
        }
        Nodo(){}
        Nodo *retSig(){
            return sig;
        }
        int retDato(){
            return dato;
        }
        void unirCon(Nodo *n){
            sig = n;
        }
};
class Pila{
    private:
        Nodo* cima;

    public:

    Pila(){
        cima = NULL;
    }

    void Push(int v){
        Nodo *n = new Nodo(v);
        /*
        if(cima == NULL){
            cima = n;
        }else{
            n->unirCon(cima);
            cima = n;
        }
        */
        n->unirCon(cima);
        cima = n;
    }
    void Pop(){
        if(cima != NULL){
            Nodo *temp = cima;
            cima = temp->retSig();
            delete temp;
        }
    }
    void mostrarDatos(){
        Nodo *temp = cima;
        while(temp != NULL){
            cout<<temp->retDato()<<endl;
            temp = temp->retSig();
        }
    }
    int Size(){
        Nodo *temp = cima;
        int i=0;
        while(temp != NULL){
            i++;
            temp = temp->retSig();
        }
        return i;
    }
};
int main()
{
    Pila* pi = new Pila;
    pi->Push(3);
    pi->Push(5);
    pi->Push(8);
    pi->Push(7);
    pi->Pop();
    pi->Pop();
    pi->mostrarDatos();
    
    
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
*/
