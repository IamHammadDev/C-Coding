#include<iostream>
using namespace std;

int main(){
	int n1, n2;
	cout<<"Enter 1st number to check whether its is prime or not: ";
	cin>> n1;
	cout<<"Enter 2nd number to check whether its is prime or not: ";
	cin>> n2;
	for(int num = n1; num < n2; num++){
		int i;
		for(i = 2; i < num; i++){
			if(num%i== 0){
				break;
			}
		}
		if(i==num){
			cout<<num<<endl;
		}
	}
//	int i;
//	for(i=2;i<n;i++){
//		if(n%i==0){
//		cout<<"Non Prime" << endl;
//		break;
//		}
//	}
//	if(i==n){
//		cout<<"Prime" << endl;
//	}
//	for(int i = 1; i<100; i++){
//		if(i%3==0){
//			continue;
//		}
//		cout<<"Iterated Value of i: " << i << endl;
//	}
	return 0;
}
