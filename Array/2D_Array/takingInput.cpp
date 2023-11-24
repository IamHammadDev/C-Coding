#include<iostream>
using namespace std;

int main(){
	//2D Arrays
	//taking row and col size
	int row, col;
	cout<<"Enter the number of rows: ";
	cin>>row;
	cout<<"Enter the number of cols: ";
	cin>> col;
	int arr[row][col];
	//taking 2D array values
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter 2D array values for rows and cols: ";
			cin>> arr[i][j];
		}
	}
	//displaying values
	cout<<"Matrix: \n";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j] << " ";
		}
		cout<<endl;
	}
	return 0;
}
