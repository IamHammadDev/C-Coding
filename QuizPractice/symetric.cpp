#include <iostream>
using namespace std;

bool isSymmetric(int number) {
    int orNum = number;
    int rev = 0;
    while(number>0){
    	rev = (rev*10) + (number%10);
    	number /= 10;
	}
	return orNum == rev;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isSymmetric(number)) {
        cout << number << " is a symmetric number." << endl;
    } else {
        cout << number << " is not a symmetric number." << endl;
    }

    return 0;
}

