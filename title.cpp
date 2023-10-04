#include <iostream>
using namespace std;
// Function prototype
string checkTitle(int age, char gender);
int main() {
	// Declaration of Vars
    int age;
    char gender;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;
	// calling func
    string title = checkTitle(age, gender);

    cout << "Your title is: " << title << endl;

    return 0;
}

// Function definition
string checkTitle(int age, char gender) {
    if (gender == 'm') {
        if (age >= 16) {
            return "Mr.";
        } else {
            return "Master";
        }
    } else if (gender == 'f') {
        if (age >= 16) {
            return "Ms.";
        } else {
            return "Miss";
        }
    } else {
        return "Invalid gender";
    }
}

