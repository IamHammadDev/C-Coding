#include<iostream>
#include<windows.h>
using namespace std;
void AirLineCompany(string countryName, int ticketPrice, float finalPrice);
int main()
{
	string countryName;
	int ticketPrice;
	float finalPrice;
	cout<<"Enter the Country Name (Pak 5%) (Ire 10%) (Ind 20%) (Eng 30%) (Can 45%): ";
	cin>> countryName;
	cout<<"Enter the price of the ticket in Dollars: $";
	cin>> ticketPrice;
	AirLineCompany(countryName, ticketPrice,finalPrice);
	return 0;
}
void AirLineCompany(string countryName, int ticketPrice, float finalPrice){
	if(countryName == "Pak")
	{
		finalPrice = ticketPrice - (ticketPrice * 0.05);
		cout<<"You final price for " << countryName <<  " ticket after discount in dollars are : $" << finalPrice << endl;
	}
	else if(countryName == "Ire")
	{
		finalPrice = ticketPrice - (ticketPrice * 0.1);
		cout<<"You final price for " << countryName <<  " ticket after discount in dollars are : $" << finalPrice << endl;
	}
	else if(countryName == "Ind")
	{
		finalPrice = ticketPrice - (ticketPrice * 0.2);
		cout<<"You final price for " << countryName <<  " ticket after discount in dollars are : $" << finalPrice << endl;
	}
	else if(countryName == "Eng")
	{
		finalPrice = ticketPrice - (ticketPrice * 0.3);
		cout<<"You final price for " << countryName <<  " ticket after discount in dollars are : $" << finalPrice << endl;
	}
	else if(countryName == "Can")
	{
		finalPrice = ticketPrice - (ticketPrice * 0.45);
		cout<<"You final price for " << countryName <<  " ticket after discount in dollars are : $" << finalPrice << endl;
	}
	else{
		cout<<"Error, Enter the defined country name only!";
	}
}
