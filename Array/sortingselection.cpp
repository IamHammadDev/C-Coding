#include<iostream>
using namespace std;

int main(){
//	selection sorting algorithm
	int n;
	cout<<"Enter idx: ";
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter array values: ";
		cin>> arr[i];
	}
	cout<<"*******Array Before sorting********" << endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"*******Array After sorting********"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
