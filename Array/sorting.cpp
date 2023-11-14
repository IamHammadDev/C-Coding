#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the idx: ";
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>> arr[i];
	}
	
	for(int i=0; i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				int tempVar = arr[j];
				arr[j] = arr[i];
				arr[i] = tempVar;
			}
		}
	}
	cout<<"sorted array: {";
	for(int i=0;i<n;i++){
		cout<< arr[i] << ",";
	}
	cout<< "}" <<endl;
	return 0;
}
