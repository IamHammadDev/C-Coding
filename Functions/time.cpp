#include <iostream>
using namespace std;

int main() {
    int hours, minutes;

    cout << "Enter hours (0-23): ";
    cin >> hours;

    cout << "Enter minutes (0-59): ";
    cin >> minutes;

    if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59) {
        // Calculate the time after adding 15 minutes
        minutes += 15;
        if (minutes >= 60) {
            hours += 1;
            minutes -= 60;
            if (hours == 24) {
                hours = 0;
            }
        }

        // Print the result in hh:mm format
        cout << "Time after 15 minutes: ";
        if (hours < 10) {
            cout << "0";
        }
        cout << hours << ":";
        if (minutes < 10) {
            cout << "0";
        }
        cout << minutes << endl;
    } else {
        cout << "Invalid input. Please enter valid hours and minutes." << endl;
    }

    return 0;
}

