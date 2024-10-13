#include<iostream>
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
};

int main(){
  pila* nums = new pila;
  int a;
  cin >> a;
  for(int i = 0 ;i<a;i++){
    int v;
    cin >> v;
    nums->agregar(v);
  }
  cout<< "pila: "<<endl;
  nums->mostrar();
  cout << endl;
  pila* rpta = new pila;
  while(!nums->vacio()){
    int u = nums->encima();
    rpta->agregar(u);
    nums->eliminar();
  }
  cout << "pila invertida: "<<endl;
  rpta->mostrar();
  cout << endl;
  

    return 0;
}