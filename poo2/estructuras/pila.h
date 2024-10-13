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
};