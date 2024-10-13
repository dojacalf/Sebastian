class cola
{
private:
    node *pri; // primer nodo xd
    node *ult;  // ultimo nodo

public:
    cola()
    {
        pri = ult = nullptr;
    }
    int ultimo(){
        return ult->getval();
    }
    int primero(){
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
};