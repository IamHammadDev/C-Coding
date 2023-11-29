#include<iostream>
using namespace std;

int main(){
	//Multiplication of a matrix
	int n1, n2, n3;
	cout<<"Enter the value for n1: ";
	cin>> n1;
	cout<<"Enter the value for n2: ";
	cin>> n2;
	cout<<"Enter the value for n3: ";
	cin>> n3;
	int m1[n1][n2];
	int m2[n2][n3];
	//taking input
	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
			cout<<"Enter the value for the first Matrix: ";
			cin>>m1[i][j];
		}
	}
	for(int i=0; i<n2; i++){
		for(int j=0; j<n3; j++){
			cout<<"Enter the value for the 2nd Matrix: ";
			cin>>m2[i][j];
		}
	}
	int ans[n1][n3];
	for(int i=0; i<n1; i++){
		for(int j=0; j<n3; j++){
			ans[i][j] = 0;
		}
	}
	//logic of multiply
	for(int i=0; i<n1; i++){
		for(int j=0; j<n3; j++){
			for(int k=0; k<n2; k++){
				ans[i][j] += m1[i][k]*m2[k][j];
			}
		}
	}
	//display output Matrix
	for(int i=0; i<n1; i++){
		for(int j=0; j<n3; j++){
			cout<< ans[i][j] << " ";
		}
		cout<<endl;
	}
	return 0;
}
