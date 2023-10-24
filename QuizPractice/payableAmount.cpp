#include <iostream>
using namespace std;
float payAmount(string day, int totalAmount){
	int payable;
	if(day == "sun"){
		payable = totalAmount -(totalAmount*0.10);
	}else{
		payable = totalAmount;
	}
	return payable;
}
int main() {
    string day;
    int totalAmount; 
	float payableAmount;
    cout<<"Enter the day(sun, mon, tue, thur, fri, sat): ";
    cin>> day;
    cout<<"Enter the total purchase amount: ";
    cin>> totalAmount;
    payableAmount = payAmount(day, totalAmount);
    cout<<"Your total Amount is: " << payableAmount << endl;
    return 0;
}

