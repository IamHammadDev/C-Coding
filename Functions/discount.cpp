#include <iostream>
using namespace std;
int main() {
	while(true)
	{
		double totalPrice;
		double discount = 0.05;
		cout<<"Enter the Total Price of the Item: $ ";
		cin>> totalPrice;
		if(totalPrice == 500)
		{
			double discountTotal = totalPrice - (totalPrice * discount);
			cout<<"Total price is exactly $500. Applying a 5% discount." << endl;
			cout<<"Updated total price after discount: $ " << discountTotal << endl;
			break;
		}
		else if(totalPrice > 500){
			cout << "Total price is greater than $500." << endl;
            break;
		}
		else if(totalPrice < 500)
		{
			cout << "Current total price: $ " << totalPrice << endl;
			break;
		}
		else {
            cout << "Current total price: $ " << totalPrice << endl;
        }
	}
    return 0;
}


