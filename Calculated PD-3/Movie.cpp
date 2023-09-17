#include <iostream>
using namespace std;

int main() {
    // Declare variables to store user input
    string movieName;
    float adultTicketPrice, childTicketPrice, donationPercentage;
    int numAdultTickets, numChildTickets;

    // Prompt the user for input
    cout << "Enter the movie name: ";
    cin>> movieName;

    cout << "Enter the adult ticket price: $";
    cin >> adultTicketPrice;

    cout << "Enter the child ticket price: $";
    cin >> childTicketPrice;

    cout << "Enter the number of adult tickets sold: ";
    cin >> numAdultTickets;

    cout << "Enter the number of child tickets sold: ";
    cin >> numChildTickets;

    cout << "Enter the percentage of the amount to be donated to the charity: ";
    cin >> donationPercentage;

    // Calculate the total amount generated from ticket sales
    float totalAmount = (adultTicketPrice * numAdultTickets) + (childTicketPrice * numChildTickets);

    // Calculate the donation amount
    float donationAmount = (donationPercentage / 100) * totalAmount;

    // Calculate the remaining amount after donation
    float remainingAmount = totalAmount - donationAmount;

    // Display the results
    cout << "\nMovie Name: " << movieName << endl;
    cout << "Total Amount Generated: $" << totalAmount << endl;
    cout << "Donation Amount: $" << donationAmount << endl;
    cout << "Remaining Amount: $" << remainingAmount << endl;

    return 0;
}

