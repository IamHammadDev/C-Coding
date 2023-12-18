#include<iostream>
using namespace std;
void swapPointer(int *a, int *b){
	int tempVar = *a;
	*a = *b;
	*b= tempVar;
}
void swapRefPointer(int &a, int &b){
	int tempVar = a;
	a = b;
	b= tempVar;
}
int main(){
	//Pointers
	int a = 40;
	int *ptr = &a;
	cout<<"Address of a: " << ptr << endl;
	cout<<"Address of a: " << &a << endl;
	cout<<"The value stored at the ptr: " << *ptr << endl;
	//array pointer
	int arr[] = {100, 200, 300, 400, 500};
	int *arrPtr = arr;
	for(int i=0; i<5; i++){
		cout<<"The value of arr at index: " << i << " is " << *arrPtr << " stored at: " << arrPtr << endl;
		arrPtr++;
	}
	//call by refrence
	int x,y;
	x = 5, y = 4;
	cout<<"The vale of x: " << x <<" and the value of y: " << y << " :before swap!"<< endl;
	swapPointer(&x, &y);
	cout<<"The vale of x: " << x <<" and the value of y: " << y << " :after swap!"<< endl;
	swapRefPointer(x, y);
	cout<<"The vale of x: " << x <<" and the value of y: " << y << " :after swap! by Refrence pointer"<< endl;
	//Dynamic memory allocation!
	//new operator to dynamically allocate the memory
	int *p = new int(3);
	cout<<"The value stored at address p is: " << *p << endl;
//	int *arr1 = new int[5];
//	for(int i=0; i<5; i++){
//		cout<<"Enter the value to store in the array: " << i << " ";
//		cin>>arr1[i];
//	}
//	for(int j=0; j<5; j++){
//		cout<<"Value stored in the array: " << arr1[j] << endl;
//		delete[] arr1;
//	}
	char *dyn = new char('A');
	cout<<"The value of char: " << *dyn << endl;
	delete dyn;
	cout<<"The value of char: " << *dyn << endl;
	return 0;
}
