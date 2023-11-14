#include<iostream>
using namespace std;
int main(){
	int idx_size;
	cout<<"Enter the index size of the array: ";
	cin>> idx_size;
	char arr[idx_size];
	for(int i=0;i<idx_size; i++){
		cout<<"Enter the character to rev it: ";
		cin>> arr[i];
	}
	for(int j = idx_size; j>=0; j--){
		cout<<arr[j] << " ";
	}
	
	return 0;
}
