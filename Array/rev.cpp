#include<iostream>
using namespace std;
void revArrstring(int arr[], int idx_size){
	for(int j=idx_size-1; j>=0; j--){
		cout<<arr[j] << " ";
	}
	cout<<endl;
}
int main(){
	int idx_size;
	cout<<"Enter the index size of the array: ";
	cin>> idx_size;
	int arr[idx_size];
	for(int i=0;i<idx_size; i++){
		cin>> arr[i];
	}
	cout << "Original array: ";
    for (int k = 0; k < idx_size; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
	cout<<"Array in reverse order: ";
	revArrstring(arr, idx_size);
	
	return 0;
}
