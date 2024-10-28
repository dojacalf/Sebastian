
class Nodo{
    private:
        int dato;
        Nodo *hijoDer;
        Nodo *hijoIzq;
    public:
        Nodo(int v){
            dato = v;
            hijoDer = nullptr;
            hijoIzq = nullptr;
        }

        Nodo(){}

        Nodo *retHijoDer(){
            return hijoDer;
        }
        Nodo *retHijoIzq(){
            return hijoIzq;
        }
        int retDato(){
            return dato;
        }
        void unirConIzq(Nodo *n){
            hijoIzq = n;
        }
        void unirConDer(Nodo *n){
            hijoDer = n;
        }
};