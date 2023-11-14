#include<iostream>
#include<math.h>
using namespace std;
int fact(int n){
	int factorial = 1;
	for(int i=1; i<=n;i++){
		factorial *= i;
	}
	return factorial;
}
int main(){
	int n, r;
	cout<<"Enter the number: ";
	cin>> n >> r;
//	int re = fact(n); //for factorial
	int re = fact(n) / (fact(r)*fact(n-r));// for nCr series
	cout<<"Factorial of a number: " << re << endl;
	return 0;
}
