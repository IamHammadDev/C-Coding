#include <iostream>
using namespace std;
// Function to calculate the Greatest Common Divisor (GCD) using Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int gc = b;
        b = a % b;
        a = gc;
    }
    return a;
}
// Function to calculate the Least Common Multiple (LCM) using GCD
int lcm(int a, int b) {
    int gcd_result = gcd(a, b);
    int lcm_result = (a * b) / gcd_result;
    return lcm_result;
}

int main() {
    int num1, num2;
    cout << "Enter 1st positive integers: ";
    cin >> num1;
    cout << "Enter 2nd positive integers: ";
	cin >> num2;
	//checking whether the number is positive or negative
    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive integers." << endl;
    } else {
        int gcd_result = gcd(num1, num2);
        int lcm_result = lcm(num1, num2);

        cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd_result << endl;
        cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm_result << endl;
    }

    return 0;
}

