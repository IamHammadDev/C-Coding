#include <iostream>
using namespace std;
bool isSpecialArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && arr[i] % 2 != 0) {
            // Even index should contain an even number
            return false;
        } else if (i % 2 != 0 && arr[i] % 2 == 0) {
            // Odd index should contain an odd number
            return false;
        }
    }
    return true;
}

int main() {
    int n;
	cout<<"Enter the idx: ";
	cin>> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the array values: ";
		cin>> arr[i];
	}
	if(isSpecialArray(arr, n)){
		cout << "This is a special Array!" << endl;
	}else{
		cout << "This is not a special Array!" << endl;
	}
	
    return 0;
}

