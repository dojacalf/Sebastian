#include <iostream>

void swap(int* a, int *b){
	int *temp = *a;
	a* = *b;
	b* = *temp;
}


int main() {
	int *n1 = new int;
	int *n2 = new int;

	*n1 = 1;
	*n2 = 0;
	swap(n1,n2);
	std::cout<<*n1<<std::endl;
	std::cout<<*n1<<std::endl;

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
*/
