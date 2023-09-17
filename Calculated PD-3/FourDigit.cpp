#include <iostream>
using namespace std;

int main() {
    int number, thousands, hundreds, tens, ones;
    float sum;
    cout<<"Enter a 4 Digit number: ";
    cin>> number;
    // Extract and sum individual digits
	thousands = number / 1000;
	hundreds = (number % 1000) / 100;
	tens = (number % 1000) / 10;
	ones = number % 10;
	sum = thousands + hundreds + tens + ones;
	cout<<"The sum of individual digits is: "<< sum << endl;
    return 0;
}

