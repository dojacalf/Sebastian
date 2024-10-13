#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

class ColaCircular
{
private:
    Nodo *frente;
    Nodo *final;

public:
    ColaCircular()
    {
        frente = final = nullptr;
    }

    bool vacia()
    {
        return frente == nullptr;
    }

    void agregar(int dato)
    {
        Nodo *nuevoNodo = new Nodo;
        nuevoNodo->dato = dato;

        if (vacia())
        {
            frente = final = nuevoNodo;
        }
        else
        {
            final->siguiente = nuevoNodo;
            final = nuevoNodo;
        }
    }

    int eliminar()
    {
        if (vacia())
        {
            cout << "La cola está vacía" << endl;
            return -1;
        }

        int dato = frente->dato;
        Nodo *temporal = frente;

        if (frente == final)
        {
            frente = final = nullptr;
        }
        else
        {
            frente = frente->siguiente;
        }

        delete temporal;
        return dato;
    }

    void eliminarduplicados()
    {
        if (vacia())
        {
            return;
        }

        ColaCircular colaTemporal;
        int anterior = eliminar();
        colaTemporal.agregar(anterior);

        while (!vacia())
        {
            int actual = eliminar();
            if (actual != anterior)
            {
                colaTemporal.agregar(actual);
            }
            anterior = actual;
        }

        while (!colaTemporal.vacia())
        {
            agregar(colaTemporal.eliminar());
        }
    }

    void mostrar()
    {
        if (vacia())
        {
            cout << "La cola está vacía" << endl;
            return;
        }
        else
        {

            Nodo *temporal = frente;
 jio           do
            {
                cout << temporal->dato << " ";
                temporal = temporal->siguiente;
            } while (temporal != frente);
            cout << endl;
        }
    }
};

int main()
{

    ColaCircular *nums = new ColaCircular;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int v;
        cin >> v;
        nums->agregar(v);
    }
    cout << "Cola original: ";
    nums->mostrar();

    nums->eliminarduplicados();

    cout << "Cola después de eliminar duplicados: ";
    nums->mostrar();

    return 0;
}