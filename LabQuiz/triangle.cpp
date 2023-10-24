#include<iostream>
using namespace std;
//function and its prototyping for printing triangle with numbers
void triangle_num(int row){
	int i, j;
	for(i=1; i<=row; i++){
		for(j=1; j<=i; j++){
			cout<< j << " ";
		}
		cout<<endl;
	}
}
int main(){
	int row;
	cout<<"Enter the number of rows: ";
	cin>> row;
	triangle_num(row);
	
	return 0;
}
