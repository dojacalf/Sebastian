
class Arbol
{
private:
    Nodo *raiz;

public:
    Arbol()
    {
        raiz = NULL;
    }

    void insertar_iterativamente(int v)
    {
        Nodo *n = new Nodo(v);
        if (raiz == nullptr)
        {
            raiz = n;
        }
        else
        {
            Nodo *t = raiz;
            float a = true;
            while (a)
            {
                if (v < t->retDato())
                {
                    if (t->retHijoIzq() == nullptr)
                    {
                        t->unirConIzq(n);
                        a = false;
                    }
                    else
                    {
                        t = t->retHijoIzq();
                    }
                }
                else
                {
                    if (t->retHijoDer() == nullptr)
                    {
                        t->unirConDer(n);
                        a = false;
                    }
                    else
                    {
                        t = t->retHijoDer();
                    }
                }
            }
        }
    }
    void inorden_iterativamente()
    {
        Nodo *x = raiz;
        Nodo *y;

        while (x != nullptr)
        {
            if (x->retHijoIzq() == nullptr)
            {
                cout << x->retDato() << " ";
                x = x->retHijoDer();
            }
            else
            {
                y = x->retHijoIzq();
                while (x->retHijoDer() == nullptr)
                {
                    y = y->retHijoDer();
                }
                if (y->retHijoDer() == nullptr)
                {
                    y->hijoDer() = x;
                    x = x->hijoIzq();
                }
                else
                {
                    y->hijoDer() = nullptr;
                    cout << x->retDato << " ";
                    x = x->retHijoDer;
                }
            }
        }
    }
    void inOrden()
    {
        inOrden(raiz);
    }
    void postOrden()
    {
        postOrden(raiz);
    }

protected:
    void inOrden(Nodo *r)
    {
        if (r != NULL)
        {
            inOrden(r->retHijoIzq());
            cout << r->retDato() << " ";
            inOrden(r->retHijoDer());
        }
    }

    void postOrden(Nodo *r)
    {
        if (r != NULL)
        {
            postOrden(r->retHijoIzq());
            postOrden(r->retHijoDer());
            cout << r->retDato() << " ";
        }
    }
};