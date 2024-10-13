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

class cola
{
private:
    node *pri; // primer nodo xd
    node *ult; // ultimo nodo

public:
    cola()
    {
        pri = ult = nullptr;
    }
    int ultimo()
    {
        return ult->getval();
    }
    int primero()
    {
        return pri->getval();
    }
    bool vacio()
    {
        return pri == nullptr;
    }
    void agregar(int a) // agrega al final
    {
        node *temp = new node(a);
        if (vacio())
        {
            pri = ult = temp;
        }
        else
        {
            ult->setnext(temp);
            ult = temp;
        }
    }
    void eliminar() // elimina el primero
    {
        if (!vacio())
        {
            node *temp = new node;
            temp = pri;
            pri = temp->getnext();
            if (pri == nullptr)
            {
                ult = nullptr;
            }
        }
    }
    void mostrar()
    {
        node *temp = pri;
        while (temp != nullptr)
        {
            cout << temp->getval() << " ";
            temp = temp->getnext();
        }
        cout << endl;
    }
    void eliminar_ultimo()
    {

        if (pri == ult)
        {
            delete pri;
            pri = ult = nullptr;
            return;
        }

        // Traverse the queue to find the second-to-last node
        node *temp = pri;
        while (temp->getnext() != ult)
        {
            temp = temp->getnext();
        }

        delete ult;
        temp->setnext(nullptr);
        ult = temp;
    }
};

int main()
{
    cola *nums = new cola;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int v;
        cin >> v;
        nums->agregar(v);
    }
    cola *rpta = new cola;
    while (!nums->vacio())
    {
        int p = nums->ultimo();
        rpta->agregar(p);
        nums->eliminar_ultimo();
    }
    rpta->mostrar();
    return 0;
}