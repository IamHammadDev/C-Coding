#include<iostream>
using namespace std;
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *arr;
        arr++;
    }
    return sum;
}
int main(){
	int size = 5;
	int myArray[size] = {23,45,5,6,4};
	cout << "Sum of Array Elements: " << sumArray(myArray, size) << endl;
	return 0;
}

