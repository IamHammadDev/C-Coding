#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int* start = arr;  
    //getting the last element of an array = 5 + 5 -1 = 9 elem => indexing 9, and last element 
    int* end = arr + size - 1;
    while (start < end) {
//    	swaping start to end
        int tempvar = *start;
        *start = *end;
        *end = tempvar;
//		increment start & decreament end
        start++;
        end--;
    }
}
//sum the elems of an array
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *arr;
        arr++;
    }
    return sum;
}
//product of elems an array
int productArray(const int* arr, int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= *arr;
        arr++;
    }
    return product;
}

int main() {
   	int size = 5;
    int myArray[size] = {1, 2, 3, 4, 5};

    cout << "Original Array Values: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    reverseArray(myArray, size);
    cout << "The value of an Array after Reversed Process: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    cout << "Sum of Array Elements: " << sumArray(myArray, size) << endl;

    cout << "Product of Array Elements: " << productArray(myArray, size) << endl;

    return 0;
}

