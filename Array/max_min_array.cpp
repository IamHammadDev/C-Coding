#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
	int n;
	cout<<"Enter idx: ";
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxNo = INT_MIN;
	int minNo = INT_MAX;
	for(int j=0; j<n;j++){
		maxNo = max(maxNo, arr[j]);
		minNo = min(minNo, arr[j]);
	}
	cout<<"Largest number in the array: " << maxNo << endl;;
	cout<<"smallest number in the array: " << minNo;
	return 0;
}
