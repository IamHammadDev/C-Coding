#include <iostream>
#include <string>
using namespace std;

int main() {
    double budget;
    int groupSize;
    string ticketCategory;

    cout << "Enter the total budget in Qatari Rial (QR): ";
    cin >> budget;
    cout << "Enter the number of people in the group: ";
    cin >> groupSize;

    if (groupSize >= 1 && groupSize <= 4) {
    	// 75% of the budget for transportation
        budget *= 0.75;  
    } else if (groupSize >= 5 && groupSize <= 9) {
    	// 60% of the budget for transportation
        budget *= 0.60;  
    } else if (groupSize >= 10 && groupSize <= 24) {
    	// 50% of the budget for transportation
        budget *= 0.50;  
    } else if (groupSize >= 25 && groupSize <= 49) {
    	 // 40% of the budget for transportation
        budget *= 0.40; 
    } else if (groupSize >= 50) {
    	// 25% of the budget for transportation
        budget *= 0.25;  
    }

    cout << "Enter the selected ticket category (vip/normal): ";
    cin >> ticketCategory;

    double ticketPrice;
    if (ticketCategory == "vip") {
        ticketPrice = 499.99;
    } else if (ticketCategory == "normal") {
        ticketPrice = 249.99;
    } else {
        cout << "Invalid ticket category." << endl;
        return 1;
    }

    double totalTicketCost = groupSize * ticketPrice;

    if (budget >= totalTicketCost) {
        double moneyLeft = budget - totalTicketCost;
        cout << "The budget is sufficient, Money left: " << moneyLeft << " QATARI RIAL." << endl;
    } else {
        double moneyNeeded = totalTicketCost - budget;
        cout << "Insufficient budget, Money needed: " << moneyNeeded << " QATARI RIAL." << endl;
    }

    return 0;
}

