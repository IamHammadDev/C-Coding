#include<iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	cout<<"Enter the first number: ";
	cin>> num1;
	cout<<"Enter the second number: ";
	cin>> num2;
	cout<<"Enter the third number: ";
	cin>> num3;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;
	if((*ptr1 > *ptr2) &&(*ptr1 > *ptr3)){
		cout<< *ptr1 << " is greater to all";
	}else if((*ptr2 > *ptr1) && (*ptr2 > *ptr3)){
		cout<< *ptr2 << " is greater to all";
	}else{
		cout<< *ptr3 << " is greater to all";
	}
	return 0;
}
