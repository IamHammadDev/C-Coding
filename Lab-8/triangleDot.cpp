#include <iostream>
using namespace std;
int triDot(int n) {
    int dots = 0;
    // Loop from 1 to n and add each number to the sum
    for (int i = 1; i <= n; i++) {
        dots += i;
    }
    return dots;
}

int main() {
    int n;
    cout<<"Enter the n value: ";
    cin>> n;
    int trangle1Dots = triDot(n);
    cout << "triangle("<< n <<") ? " << trangle1Dots << endl;
    return 0;
}

