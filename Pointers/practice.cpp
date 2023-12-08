#include<iostream>
using namespace std;

int main(){
	//pointers stores the address of other varriables
	int a = 10;
	//a = address &a
	cout<<"Address of a: " << &a << endl;
	//making pointer
	int *aptr = &a;
	//it will return value
	cout<<"value of a stores in the Pointer of a: " << *aptr << endl;
	//it will also return the address
	cout<<"Address of the pointer a: " << aptr << endl;
	*aptr = 20;
	cout<<"Modified value of a: " << *aptr << endl;
	cout<<"Value of a: " << a << endl;
	return 0;
}
