#include<iostream>
using namespace std;
int i,j;
void diamondPattern(int row){
	for(i=1;i<row;i++){
		for(j=i;j<=row;j++){
			cout<<"  ";
		}
		for(j=1;j<=i;j++){
			cout<<"* ";
		}
		for(j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			cout<<"  ";
		}
		for(j=i;j<=row;j++){
			cout<<"* ";
		}
		for(j=i;j<=row;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main(){
	int row;
	cout<<"Enter the number of rows: ";
	cin>> row;
	diamondPattern(row);
	return 0;
}
