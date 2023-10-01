#include <iostream>
using namespace std;

string oddishOrEvenish(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    if (sum % 2 == 0) {
        return "Evenish";
    } else {
        return "Oddish";
    }
}

int main() {
    int num;

    cout << "Enter a five-digit number: ";
    cin >> num;

    if (num >= 10000 && num <= 99999) {
        string result = oddishOrEvenish(num);
        cout << "The number is " << result << endl;
    } else {
        cout << "Please enter a valid five-digit number." << endl;
    }

    return 0;
}

