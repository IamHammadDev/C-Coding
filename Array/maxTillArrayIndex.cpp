#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
	int mx = INT_MIN;
	int n;
	cout<<"Enter the idx: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int j=0;j<n;j++){
		mx = max(mx, arr[j]);
		cout<< mx << endl;
	}
	return 0;
}
