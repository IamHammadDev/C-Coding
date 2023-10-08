#include <iostream>
using namespace std;

int main() {
    char serviceCode;
    int totalMinutes;

    // Prompt the user to enter the service code
    cout << "Enter service code (R/r for Regular, P/p for Premium): ";
    cin >> serviceCode;

    // Validate the service code
    if (serviceCode == 'R' || serviceCode == 'r' || serviceCode == 'P' || serviceCode == 'p') {
        // Prompt the user to enter the total number of minutes
        cout << "Enter total number of minutes used: ";
        cin >> totalMinutes;

        // Calculate the bill based on the service code and minutes used
        double totalBill = 0.0;

        if (serviceCode == 'R' || serviceCode == 'r') {
            // Regular service
            if (totalMinutes > 50) {
                totalBill = 10.00 + (totalMinutes - 50) * 0.20;
            } else {
                totalBill = 10.00;
            }
        } else {
            // Premium service
            char timeOfDay;
            int dayMinutes, nightMinutes;

            cout << "Enter the number of minutes used during the day: ";
            cin >> dayMinutes;
            cout << "Enter the number of minutes used during the night: ";
            cin >> nightMinutes;

            if ((dayMinutes + nightMinutes) <= 75) {
                totalBill = 25.00;
            } else {
                if (dayMinutes > 75) {
                    totalBill += (dayMinutes - 75) * 0.10;
                }

                if (nightMinutes > 100) {
                    totalBill += (nightMinutes - 100) * 0.05;
                }
            }
        }

        // Display the bill details
        cout << "\nService Type: " << ((serviceCode == 'R' || serviceCode == 'r') ? "Regular" : "Premium") << endl;
        cout << "Total Minutes Used: " << totalMinutes << " minutes" << endl;
        cout << "Total Bill Amount: $" << totalBill << endl;
    } else {
        cout << "Invalid service code. Please enter R/r for Regular or P/p for Premium." << endl;
    }

    return 0;
}

