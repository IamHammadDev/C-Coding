#include <iostream>
using namespace std;
void payment(string day, double amount);
int main() {
	string day;
	double amount;
	cout<<"Enter the day like (sun, mon, tue, thur, fri, sat): ";
	cin>> day;
	cout<<"Enter the total Purchase Amount: ";
	cin>> amount;
	payment(day, amount);
    return 0;
}
void payment(string day, double amount)
{
	
	if(day == "sun"){
		double payable = amount * 0.10;
		double total= amount - payable;
		cout<<"Your total Payable Amount after discount is: " << total << endl;
	}else{
		cout<<"Your total without discount: " << amount << endl;
	}
}


