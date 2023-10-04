#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
float lowestPrice(int kilometers, string period);

int main() {
    int kilometers;
    string period;
    cout << "Enter the number of kilometers: ";
    cin >> kilometers;
    cout << "Enter the period of the day (day/night): ";
    cin >> period;

    float price = lowestPrice(kilometers, period);
    cout << "The lowest price for " << kilometers << " kilometers during " << period << " is " << price << " EUR." << endl;

    return 0;
}

// Function definition
float lowestPrice(int kilometers, string period) {
    float taxiPrice;
	//day period
    if (period == "day") {
        if (kilometers < 20) {
            taxiPrice = 0.70 + 0.79 * kilometers;
        } else {
            taxiPrice = 0.70 + 0.90 * kilometers;
        }
    } else { 
	// Night period
        taxiPrice = 0.70 + 0.90 * kilometers;
    }

    float busPrice = 0.09 * kilometers;
    float trainPrice = 0.06 * kilometers;
    
    // Find the minimum price among the three options
    float cheapestPrice = min(min(taxiPrice, busPrice), trainPrice);
    return cheapestPrice;
}

