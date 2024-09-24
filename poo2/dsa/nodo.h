class nodo{
	private:
		int dato;
		nodo *sig;
	public:
		nodo(int v){
		dato = v;
		sig = nullptr;
		}
                nodo *ressig(){
		return sig;
		}
		int retdato(){
		 return dato;
		}
		void unircon(nodo *n){
		sig = n;
		}

};
