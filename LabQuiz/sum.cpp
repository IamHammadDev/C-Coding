#include<iostream>
using namespace std;

int main(){
	int n1, n2, sum;
	n1 = 2;
	n2 = 30;
	sum = 0;
	for(int i=n1; i<=n2; i++){
		if(i%2!=0){
			sum = sum + i;
		}
	}
	cout<<"The sume of even integers between 2 and 30 is: "<< sum ;
	return 0;
}
