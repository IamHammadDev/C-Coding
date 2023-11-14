#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n;
	cout<<"Enter the idx: ";
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>> arr[i];
	}
	int mx=arr[n];
	for(int j=0; j<n;j++){
		mx= max(mx, arr[j]);
	}
	cout << "Largest number in the array: " << mx << endl;
    return 0;
}

