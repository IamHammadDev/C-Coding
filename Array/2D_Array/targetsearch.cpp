#include<iostream>
using namespace std;

int main(){
	// Matrix Key search
	int n, m;
	cout<<"Enter the number of idx: ";
	cin>> n >> m;
	int target;
	cout<<"enter the target key: ";
	cin>> target;
	int mat[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"Enter the value for the Matrix: ";
			cin>> mat[i][j];
		}
	}
	//top-right postion of matrix
	int r = 0;
	int c = m-1;
	bool check = false;
	while(r<n && c>0){
		if(mat[r][c]==target){
			check = true;
		}
		if(mat[r][c]>target){
			c--;
		}else{
			r++;
		}
	}
	if(check){
		cout<<"Element Found!";
	}else{
		cout<<"Element does not exist!";
	}
	return 0;
}
