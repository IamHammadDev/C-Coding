#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};

    // Passing the array to the function
    displayArray(myArray, 5);

    return 0;
}

