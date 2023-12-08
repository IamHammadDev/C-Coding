#include<iostream>
using namespace std;

int main(){
//	Pointer = data type which holds the addressess of other data types
	int a = 3;
	int* b = &a;
	cout<<"The address of a: " << b << endl;
//	&---> address operatore
	cout<<"The address of a: " << &a << endl;
	
//	*----> deRefrencing for printing the address operator value
	cout<<"The value of a: " << *b << endl;
	
//	pointer to pointer---> holds the pointers address
	int** c = &b;
	cout<<"The address of b: " << &b << endl;
	cout<<"The address of b: " << c << endl;
	cout<<"The value at address b: " << **c << endl;
	return 0;
}
