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
			cout<<"Enter 2D array values: ";
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
	//finding an element
	bool flag = false;
	int x;
	cout<<"Enter element to find in the 2D: ";
	cin>> x;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]==x){
				cout<<"row: "<<i<<" "<<" col: "<<j<<endl;
				flag=true;
			}
		}
	}
	if(flag){
		cout<<"Element is Found"<<endl;
	}else{
		cout<<"Element is not found!"<<endl;
	}
	return 0;
}
