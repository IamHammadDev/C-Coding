#include<iostream>
using namespace std;
void inputMatrixVal(int arr[][100], int row, int col){
		//displaying values
	cout<<"Matrix is: \n";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j] << " ";
		}
		cout<<endl;
	}
}
int main(){
	//taking row and col size
	int row, col;
	cout<<"Enter the number of rows: ";
	cin>>row;
	cout<<"Enter the number of cols: ";
	cin>> col;
	int arr[row][100];
	//taking 2D array values
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter 2D array values for rows & cols: ";
			cin>> arr[i][j];
		}
	}
	//function calling
	inputMatrixVal(arr,row,col);
	return 0;
}
