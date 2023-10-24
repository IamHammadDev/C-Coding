#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>> n;

    int c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (number % 2 == 0) {
            c1++;
        }
        if (number % 3 == 0) {
            c2++;
        }
        if (number % 4 == 0) {
            c3++;
        }
    }

    double p1 = ((c1) / n) * 100;
    double p2 = ((c2) / n) * 100;
    double p3 = ((c3) / n) * 100;

    cout << "Division without remainder by 2:" << endl;
    cout << "Numbers Count Percent" << endl;
    cout << "2 ";

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        if (number % 2 == 0) {
            cout << number << ", ";
        }
    }

    cout << endl;
    cout << "p1 = " << p1 << "%" << endl;

    cout << "Division without remainder by 3:" << endl;
    cout << "Numbers Count Percent" << endl;
    cout << "3 ";

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        if (number % 3 == 0) {
            cout << number << ", ";
        }
    }

    cout << endl;
    cout << "p2 = " << p2 << "%" << endl;

    cout << "Division without remainder by 4:" << endl;
    cout << "Numbers Count Percent" << endl;
    cout << "4 ";

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        if (number % 4 == 0) {
            cout << number << ", ";
        }
    }

    cout << endl;
    cout << "p3 = " << p3 << "%" << endl;

    return 0;
}

