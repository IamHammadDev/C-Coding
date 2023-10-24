#include <iostream>
using namespace std;
//float payAmount(string day, int totalAmount){
//	int payable;
//	if(day == "sun"){
//		payable = totalAmount -(totalAmount*0.10);
//	}else{
//		payable = totalAmount - (totalAmount*0.05);
//	}
//	return payable;
//}
int main() {
	while(true){
	string day, anotherCustomer;
    int totalAmount, discount; 
	float payableAmount;
    cout<<"Enter the day(sun, mon, tue, thur, fri, sat): ";
    cin>> day;
    cout<<"Enter the total purchase amount: ";
    cin>> totalAmount;
    if(day == "sun"){
    	discount = totalAmount - (totalAmount * 0.10);
	}else{
		discount = totalAmount - (totalAmount * 0.05);
	}
	payableAmount = discount;
	cout<<"Your Total amount after discount: " << payableAmount << endl;
	cout<<"Do you want to enter details for another customer? (yes/no): ";
	cin>>anotherCustomer;
	if(anotherCustomer != "yes"){
		break;
		}
	}
    return 0;
}

