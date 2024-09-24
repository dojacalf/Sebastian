class pila{
    private:
        nodo* cima;

    public:

    Pila(){
        cima = NULL;
    }

    void Push(int v){
        nodo *n = new nodo(v);
        /*
        if(cima == NULL){
            cima = n;
        }else{
            n->unirCon(cima);
            cima = n;
        }
        */
        n->unircon(cima);
        cima = n;
    }
    void pop(){
        if(cima != NULL){
            nodo *temp = cima;
            cima = temp->retSig();
            delete temp;
        }
    }
    void mostrardatos(){
        nodo *temp = cima;
        while(temp != NULL){
            cout<<temp->retdato()<<endl;
            temp = temp->retsig();
        }
    }
    int size(){
        nodo *temp = cima;
        int i=0;
        while(temp != NULL){
            i++;
            temp = temp->retSig();
        }
        return i;
    }
;
