#include <iostream>
#include <string>
using namespace std;
class nodo
{
private:
    char val;
    nodo *next;

public:
    nodo(char v)
    {
        val = v;
        next = nullptr;
    }
    nodo() {};
    nodo *getnext()
    {
        return next;
    }
    char getval()
    {
        return val;
    }
    void setnext(nodo *n)
    {
        next = n;
    }
};

class pila
{
private:
    nodo *top;

public:
    pila()
    {
        top = nullptr;
    }
    void agregar(char a)
    {
        nodo *temp = new nodo(a);
        if (top == nullptr)
        {
            top = temp;
        }
        else
        {
            temp->setnext(top);
            top = temp;
        }
    }
    void eliminar()
    {

        if (top != nullptr)
        {
            nodo *temp = new nodo;
            temp = top;
            top = temp->getnext();
            delete temp;
        }
    }
    char encima()
    {
        if (top == nullptr)
        {
            cout << "no hay nada encima" << endl;
            return '?';
        }
        else
        {
            return top->getval();
        }
    }
    bool vacio()
    {
        if (top == nullptr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
using namespace std;

int main()
{
    string entrada;
    string resultado;
    pila *operadores = new pila;
    cin >> entrada;
    char memoria;
    int f = entrada.size() - 1;
    for (int i = 0; i < entrada.size() / 2; i++)
    {
        memoria = entrada[f];
        entrada[f] = entrada[i];
        entrada[i] = memoria;
        f--;
    }
    for (char a : entrada)
    {
        if (a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9' || a == '0')
        {
            resultado += a;
        }
        if (a == '+' || a == '-' || a == '*' || a == '/')
        {
            operadores->agregar(a);
        }
    }
    resultado += operadores->encima();
    char memo;
    int e = resultado.size() - 1;
    for (int i = 0; i < resultado.size() / 2; i++)
    {
        memo = resultado[e];
        resultado[e] = resultado[i];
        resultado[i] = memo;
        e--;
    }
    cout << resultado << endl;
    return 0;
}
