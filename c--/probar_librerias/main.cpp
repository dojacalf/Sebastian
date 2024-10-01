#include <iostream>
using namespace std;

class nodo{
	private:
		int dato;
		nodo* next;
	public:
	nodo(){}
	nodo(int val){
		dato = val;
		next = nullptr;
	}
	int getdato(){
		return dato;
	}
	void unir(nodo* sig){
		next = sig;
	}
};

int main() {
	nodo xd(10);
	nodo* ff(20);
	xd.unir(ff);

  return 0;
}

/*
int* ptr
num = 10
ptr = &num

num -> bota el valor de num
*ptr ->bota el valor dentro de ptr
ptr -> bota una ubicacion xd
&num  -> es la ubicacion donde esta num

int *ptr = new int; -> sirve para crear puntero sin usar otra variable
fun(int *a)-> el parametro es un puntero

*fuc(){return a} -> a:puntero *a:valor dentro de a
*/
