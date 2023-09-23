#include <iostream>
using namespace std;

int main() {
    int holidays, workingDays;
    int norm = 30000; // Norm of games in minutes per year
    int workingMinutes = 63; // Time for games on working days in minutes per day
    int holidayMinutes = 127; // Time for games on holidays in minutes per day
    int totalMinutes, difference, hours, minutes;

    // Input the number of holidays
    cout << "Enter the number of holidays: ";
    cin >> holidays;

    // Calculate the number of working days
    workingDays = 365 - holidays;

    // Calculate the total time for games
    totalMinutes = (workingDays * workingMinutes) + (holidays * holidayMinutes);

    // Calculate the difference from the norm
    difference = norm - totalMinutes;

    // Check if Tom can sleep well or not
    if (difference >= 0) {
        cout << "Tom sleeps well" << endl;
        cout << difference / 60 << " hours and " << difference % 60 << " minutes less for play" << endl;
    } else {
        cout << "Tom will run away" << endl;
        difference = -difference; // Convert difference to positive
        cout << difference / 60 << " hours and " << difference % 60 << " minutes for play" << endl;
    }
}
