#include<iostream>
#include<windows.h>
using namespace std;
void Roses();
int main()
{
	int redRoses, whiteRoses, tulips;
    double redRosePrice = 2.00, whiteRosePrice = 4.10, tulipsPrice = 2.50;
    double totalPrice, discount, payableAmount;
    // Input the number of flowers
    cout << "Enter the number of red roses: ";
    cin >> redRoses;
    cout << "Enter the number of white roses: ";
    cin >> whiteRoses;
    cout << "Enter the number of tulips: ";
    cin >> tulips;
    // Calculate the total price
    totalPrice = (redRoses * redRosePrice) + (whiteRoses * whiteRosePrice) + (tulips * tulipsPrice);
    if (totalPrice > 200) {
        discount = 0.2 * totalPrice;  // Calculate the discount amount
        payableAmount = totalPrice - discount;  // Calculate the payable amount after discount

        // Print the original price and payable amount after discount
        cout << "Original price: $" << totalPrice << endl;
        cout << "Payable amount after discount: $" << payableAmount << endl;
    } else {
        // Print the total price without any discount
        cout << "Total price: $" << totalPrice << endl;
    }
	return 0;
}
