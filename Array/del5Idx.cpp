#include <iostream>
using namespace std;

int main() {
    const int arraySize = 10;
    int arr[arraySize] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int indexToDelete = 5; // Index to delete
    // Shifting elements to the left starting from the specified index
    for (int i = indexToDelete; i < arraySize - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    // Placing a zero at the last position
    arr[arraySize - 1] = 0;
    // Displaying the modified array
    for (int i = 0; i < arraySize; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}

