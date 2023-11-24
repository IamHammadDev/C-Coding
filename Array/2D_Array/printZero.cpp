#include<iostream>
using namespace std;
//function
void initilizeMatrix(int arr[][100] ,int row, int col){
	//taking input and displaying results
	for(int i=0; i<row;i++){
		for(int j=0;j<col;j++){
			arr[i][j] = 0; //assigning 0 to matrix
			cout << arr[i][j] << " ";
		}
		cout<<endl;
	}
}
int main(){
	int row, col;
	cout<<"Enter the row size: ";
	cin>> row;
	cout<<"Enter the col size: ";
	cin>> col;
	int arr[row][100];
	//function calling
	initilizeMatrix(arr ,row,col);
	return 0;
}
