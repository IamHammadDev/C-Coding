#include<iostream>
using namespace std;
int long sum_series(int n, int x){
	int fact;
	int sumOfTheseries;
	for(int i=1; i<=n;i++){
		fact = fact*i;
		for(int j=1;j<=x;j++){
			sumOfTheseries += fact*n*x;
		}
	}
	return sumOfTheseries;
}

int main(){
	int n, x;
	cout<<"Enter the value of n: ";
	cin>> n;
	cout<<"Enter the value of x: ";
	cin>> x;
	int resultOfseries = sum_series(n, x);
	cout<<"The sum of the series of n and x is: " << resultOfseries << endl;
	return 0;
}
