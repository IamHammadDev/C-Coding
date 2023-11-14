#include<iostream>
#include<math.h>
using namespace std;

int main(){
	//simple Array
//	int arr[4] = {10,20,30,40};
//	cout<<"Array: " << arr[2] << endl;
//	arr[0]=10;
//	arr[1]=20;
	//array indexing
//	int arr_idx, i, j;
//	cout<<"Enter Array index: ";
//	cin>> arr_idx;
//	int array[arr_idx];
//	//array value putting vals
//	for(i=0;i<arr_idx;i++){
//		cin>>array[i];
//	}
//	//array displaying value
//	for(j=0; j<arr_idx; j++){
//		cout<<"Array: " << array[j] << endl;
//	}
	int n;
	int arr2[n];
	cout<<"Enter idx: ";
	cin>> n;
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	for(int j=0;j<n;j++){
		cout<<"Array values: " << arr2[j] << endl;
	}
	return 0;
}
