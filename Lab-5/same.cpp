#include <iostream>
using namespace std;
// Function prototype
bool areNumbersSame(int num1, int num2, int num3);
int main() {
    int num1, num2, num3;

    cout << "Enter 1st number: ";
    cin >> num1;
     cout << "Enter 2nd number: ";
    cin >> num2;
	 cout << "Enter 3rd number: ";
    cin >> num3;
    // Function calling and embedded to if structure
    if (areNumbersSame(num1, num2, num3)) {
        cout << "Yes, all three numbers are the same." << endl;
    } else {
        cout << "No, the numbers are not the same." << endl;
    }

    return 0;
}
// Function definition
bool areNumbersSame(int num1, int num2, int num3) {
    return (num1 == num2) && (num2 == num3);
}



