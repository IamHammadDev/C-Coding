#include <iostream>
using namespace std;

bool isSymmetrical(int number) {
    int originalNumber = number;
    int reversedNumber = 0;
    
    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
//        reversedNumber = digit;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int num;

    cout << "Enter a three-digit number: ";
    cin >> num;

    if (num >= 100 && num <= 999) {
        if (isSymmetrical(num)) {
            cout << num << " is symmetrical." << endl;
        } else {
            cout << num << " is not symmetrical." << endl;
        }
    } else {
        cout << "Please enter a valid three-digit number." << endl;
    }

    return 0;
}

