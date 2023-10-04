#include <iostream>
#include <string>
using namespace std;
// Function prototype
float checkCost(string city, string product, int quantity);
int main() {
    string city, product;
    int quantity;

    cout << "Enter the city (Sofia , Plovdiv , Varna): ";
    cin >> city;
    cout << "Enter the product: ";
    cin >> product;
    cout << "Enter the quantity: ";
    cin >> quantity;

    float cost = checkCost(city, product, quantity);
    cout << "The cost for " << quantity << " " << product << " in " << city << " is " << cost << endl;

    return 0;
}

// Function definition
float checkCost(string city, string product, int quantity) {
    float cost = -1.0;  // Default value for invalid input

    // Define prices based on city and product
    // for city Sofia
    if (city == "Sofia") {
        if (product == "coffee") {
            cost = 0.50 * quantity;
        } else if (product == "water") {
            cost = 0.80 * quantity;
        } else if (product == "beer") {
            cost = 1.20 * quantity;
        }
    }
    // for city Plovdiv
	 else if (city == "Plovdiv") {
        if (product == "coffee") {
            cost = 0.40 * quantity;
        } else if (product == "water") {
            cost = 0.70 * quantity;
        } else if (product == "beer") {
            cost = 1.15 * quantity;
        }
    } 
    // for city Varna
	else if (city == "Varna") {
        if (product == "coffee") {
            cost = 0.45 * quantity;
        } else if (product == "water") {
            cost = 0.70 * quantity;
        } else if (product == "beer") {
            cost = 1.10 * quantity;
        }
    }

    return cost;
}

