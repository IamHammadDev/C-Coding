#include<iostream>
using namespace std;

void insertArrayInMiddle(int arr1[], int arr2[], int n1, int n2) {
    int midIdx = n1 / 2;  
    // Shift the elements in the first array to make space for the second array
    for (int i = n1 - 1; i >= midIdx; i--) {
        arr1[i + n2] = arr1[i];
    }
    // Insert the elements of the second array into the middle of the first array
    for (int i = 0; i < n2; i++) {
        arr1[midIdx + i] = arr2[i];
    }
}

int main() {
    int n1, n2;
    cout << "Enter only 2 index in the 1st array: ";
    cin >> n1;
    cout << "Enter the index in the 2nd array: ";
    cin >> n2;

    int arr1[n1 + n2], arr2[n2];
    // For array1
    for(int i = 0; i < n1; i++) {
        cout << "Enter the 1st array values (only two elems): ";
        cin >> arr1[i];
        cout << arr1[i] << endl;
    }
    // For 2nd array
    for(int j = 0; j < n2; j++) {
        cout << "Enter the 2nd array values: ";
        cin >> arr2[j];
        cout << arr2[j] << endl;
    }
    // Embed the 2nd array into the middle of the 1st array
    insertArrayInMiddle(arr1, arr2, n1, n2);
    // Display the result
    cout << "Merged Array: {";
    for (int i = 0; i < n1 + n2; i++) {
        cout << arr1[i] << " ";
    }
	cout<<"}";
    return 0;
}

