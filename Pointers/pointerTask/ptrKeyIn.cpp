#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number: ";
	cin>> num;
	int* ptr = &num;
	//printing value stored at pointer
	cout<<"The value of the number: " << *ptr << endl;
	return 0;
}
