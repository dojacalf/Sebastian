#include<iostream>

int main(){	
	int arr[10];
	int *p = arr;
	for(int i = 0 ;i<10;i++){
		*(p +i) = 10;

}
	for(int i = 0;i<10;i++){
		std::cout<< *(p+i) << std::endl;
}


	
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
 */
