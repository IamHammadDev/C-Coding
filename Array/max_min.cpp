#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxNo = arr[0];
    int minNo = arr[0];
    for (int j = 1; j < n; j++) {
        maxNo = max(maxNo, arr[j]);
        minNo = min(minNo, arr[j]);
    }
    cout << "Largest number in the array: " << maxNo << endl;
    cout << "smallest number in the array: " << minNo;

    return 0;
}

