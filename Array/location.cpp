#include<iostream>
using namespace std;

int main(){
	int idx_size;
	cout<<"Enter the index size of the array: ";
	cin>> idx_size;
	char arr[idx_size];
	for(int i=0;i<idx_size; i++){
		cin>> arr[i];
	}
	for(int j=0;j<idx_size; j++){
		cout<< arr[j] << " is at the position of: " << j << endl;
	}
	
	return 0;
}
