#include<iostream>
using namespace std;
void halfTriangle(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=n-i){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		cout<< endl;
	}
}
int main(){
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	halfTriangle(n);
}
