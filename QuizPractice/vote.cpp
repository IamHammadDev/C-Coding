#include <iostream>
using namespace std;

string vote(int age) {
    if (age >= 18) {
        return " You are eligible to vote!";
    } else {
        return " You are not eligible to vote because you are underage!";
    }
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << name << vote(age) << endl;
    return 0;
}

