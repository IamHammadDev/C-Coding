#include<iostream>
using namespace std;
void swap(int *a, int *b){
	//now after making ptr this will reffer the main function variables
	int tempVar = *a;
	*a = *b;
	*b = tempVar;
}
void increment(int *x){
	*(x++);
}
int main(){
	//CALLING BY REFERENCE
//	Pointer = data type which holds the addressess of other data types
	int a = 5;
	int b = 10;
	//it will not swap value bcz every function accepts only var values not whole variable,
//	 so the varibale in the fn are local vars and it will return the same value
	int *aptr = &a;
	int *bptr = &b;
	//as pointer can modify its var value to anywhere so it is very usefull to use this here
	//swap(a,b);
	//pointer function calling
	swap(aptr, bptr);
	cout<< a << " " << b << endl;
//	cout<< *aptr << " " << *bptr << endl;
	int x = 2;
	int *xptr = &x;
	increment(xptr);
	cout<<"Value of x: " << x << endl;
	return 0;
}
