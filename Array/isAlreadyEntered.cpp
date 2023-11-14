#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return true;  // Number is already entered
        }
    }
    return false;  // Number is not in the array
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Array to store entered values
    int alreadyEnteredValues[n]; // Array to store already entered values
    int alreadyEnteredCount = 0; // Counter for already entered values

    for (int i = 0; i < n; i++) {
        int number;
        cout << "Enter value for index " << i << ": ";
        cin >> number;

        if (isAlreadyEntered(arr, i, number)) {
            cout << "Already Entered!" << endl;
            alreadyEnteredValues[alreadyEnteredCount] = number;
            alreadyEnteredCount++;
        } else {
            arr[i] = number;
        }
    }

    if (alreadyEnteredCount > 0) {
        cout << "Already Entered values are: ";
        for (int i = 0; i < alreadyEnteredCount; i++) {
            cout << alreadyEnteredValues[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

