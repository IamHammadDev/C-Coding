#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the idx: ";
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>> arr[i];
	}
	int curr = 0;
	for(int i=0;i<n;i++){
		curr = 0;
		for(int j=i;j<n;j++){
			curr += arr[j];
//			cout<<"sum of subArrays: " << arr[j] << endl;
			cout<<"sum of subArrays: " << curr << endl;
		}
	}
	return 0;
}
