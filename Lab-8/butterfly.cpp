#include<iostream>
using namespace std;

int main()
{
	int i, j, n;
	cout<<"Enter the number of n: ";
	cin>> n;
	//Upper part of butterfly Patern
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		int space = 2*n - 2*i;
		for(j=1;j<=space;j++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
