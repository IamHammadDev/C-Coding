#include<iostream>
using namespace std;
int main()
{
	string movieName; 
	int adultTicketsold, childTicketsold;
	float adultTicketPrice, childTicketPrice, remainingAmount, donationAmount, totalAmount, donationCharity;
	cout<<"Enter the Movie name: ";
	cin>> movieName;
	cout<<endl;
	cout<<"Enter the Adult Ticket Price: ";
	cin>> adultTicketPrice;
	cout<<endl;
	cout<<"Enter the Child ticket Price: ";
	cin>> childTicketPrice;
	cout<<endl;
	cout<<"Enter the number of Adult tickets solded: ";
	cin>> adultTicketsold;
	cout<<endl;
	cout<<"Enter the number of Child tickets solded: ";
	cin>> childTicketsold;
	cout<<endl;
	cout<<"Enter your donation for charity: ";
	cin>> donationCharity;
	cout<<endl;
	//Logic Making ready!	
    totalAmount = (adultTicketPrice *  adultTicketsold) + (childTicketPrice * childTicketsold);

    // Calculate the donation amount
    donationAmount = (donationCharity / 100) * totalAmount;

    // Calculate the remaining amount after donation
    remainingAmount = totalAmount - donationAmount;
	
	cout<<"Movie Name: " << movieName << endl;
	cout<<"Total Amount Generated: "<< totalAmount << endl;
	cout<<"Donated Amount: "<< donationAmount << endl;
	cout<<"Total Amount after Charity: "<< remainingAmount << endl;
	return 0;
}
