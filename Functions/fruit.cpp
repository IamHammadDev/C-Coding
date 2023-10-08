#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruit, dayOfWeek;
    double quantity, price;

    // Input the fruit, day of the week, and quantity
    cout << "Enter the fruit name (banana/apple/orange/grapefruit/kiwi/pineapple/grapes): ";
    cin >> fruit;
    cout << "Enter the day of the week (Mon/Tue/...): ";
    cin >> dayOfWeek;
    cout << "Enter the quantity: ";
    cin >> quantity;

    // Determine the price based on the day of the week and fruit
    if (dayOfWeek == "sat" || dayOfWeek == "sun") {
        // Weekend prices
        if (fruit == "banana") price = 2.70;
        else if (fruit == "apple") price = 1.25;
        else if (fruit == "orange") price = 0.90;
        else if (fruit == "grapefruit") price = 1.60;
        else if (fruit == "kiwi") price = 3.00;
        else if (fruit == "pineapple") price = 5.60;
        else if (fruit == "grapes") price = 4.20;
        else {
            cout << "error" << endl;
            return 1; // Invalid fruit name
        }
    } else if (dayOfWeek == "mon" || dayOfWeek == "tue" || dayOfWeek == "wed" || dayOfWeek == "thur" || dayOfWeek == "fri") {
        // Weekday prices
        if (fruit == "banana") price = 2.50;
        else if (fruit == "apple") price = 1.20;
        else if (fruit == "orange") price = 0.85;
        else if (fruit == "grapefruit") price = 1.45;
        else if (fruit == "kiwi") price = 2.70;
        else if (fruit == "pineapple") price = 5.50;
        else if (fruit == "grapes") price = 3.85;
        else {
            cout << "error" << endl;
            return 1; // Invalid fruit name
        }
    } else {
        cout << "error" << endl;
        return 1; // Invalid day of the week
    }

    // Calculate and print the total price
    double totalPrice = quantity * price;
    cout <<"Your total Price for required Entity: "<< totalPrice << endl;

    return 0;
}

