#include <iostream>

using namespace std;

class node
{
private:
    int val;
    node *next;

public:
    node(int v)
    {
        val = v;
        next = nullptr;
    }
    node() {};
    node *getnext()
    {
        return next;
    }
    int getval()
    {
        return val;
    }
    void setnext(node *n)
    {
        next = n;
    }
};

class pila
{
private:
    node *top;

public:
    pila()
    {
        top = nullptr;
    }
    void agregar(int a)
    {
        node *temp = new node(a);
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
            node *temp = new node;
            temp = top;
            top = temp->getnext();
            delete temp;
        }
    }
    int encima()
    {
        int a;
        a = top->getval();
        return a;
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
    void mostrar()
    {
        node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->getval() << ' ';
            temp = temp->getnext();
        }
    }
    int size()
    {
        node *temp = top;
        int a = 0;
        while (temp != nullptr)
        {
            a++;
            temp = temp->getnext();
        }
        return a;
    }
    bool esta(int v)
    {
        if (!vacio())
        {
            node *temp = top;
            int a = 0;
            while (temp != nullptr)
            {
                if (temp->getval() == v)
                {
                    return true;
                    break;
                }
                else
                {
                    return false;
                    break;
                }
                a++;
            }
        }else{
            return false;
        }

    }
};

int main()
{
    pila *numeros = new pila;
    numeros->agregar(15);
    numeros->agregar(5);
    numeros->agregar(5);
    numeros->agregar(5);
    numeros->agregar(40);
    pila *rpta = new pila;

    while (numeros->vacio() != true)
    {
        int a = numeros->encima();
        if (rpta->esta(a) == false)
        {
            rpta->agregar(a);
        }
        numeros->eliminar();
    
    }
    rpta->mostrar();
    return 0;
}