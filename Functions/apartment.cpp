#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    int numStays;

    // Input the month and number of stays
    cout << "Enter the month (May, Jun, Jul, Aug, Sept, or Oct): ";
    cin >> month;
    cout << "Enter the number of stays (0-200): ";
    cin >> numStays;

    double studioPrice = 0.0;
    double apartmentPrice = 0.0;

    // Calculate the price based on the month and number of stays
    if ((month == "May" || month == "Oct") && numStays > 14) {
        studioPrice = 50.0 * numStays * 0.70; // 30% discount for more than 14 stays in May and October
    } else if ((month == "May" || month == "Oct") && numStays > 7) {
        studioPrice = 50.0 * numStays * 0.95; // 5% discount for more than 7 stays in May and October
    } else if ((month == "Jun" || month == "Sept") && numStays > 14) {
        studioPrice = 75.20 * numStays * 0.80; // 20% discount for more than 14 stays in June and September
    } else {
        studioPrice = 50.0 * numStays; // Default studio price
    }

    if (numStays > 14) {
        apartmentPrice = 68.70 * numStays * 0.90; // 10% discount for more than 14 stays in all months for apartments
    } else {
        apartmentPrice = 65.0 * numStays; // Default apartment price
    }

    // Output the prices for the whole stay
    cout << "Apartment: " << apartmentPrice << "$." << endl;
    cout << "Studio: " << studioPrice << "$." << endl;

    return 0;
}

