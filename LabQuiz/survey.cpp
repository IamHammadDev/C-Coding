#include<iostream>
using namespace std;

int main(){
	int days = 10;
	int workingHourOfDay = 12;
	int tempReadPerDay;
	float tempAveOfTheDay;
	cout<<"Enter the temprature Reading taken in a day: ";
	cin>> tempReadPerDay;
//	int TempMultDay = tempReadPerDay * day;
	for(int i=1;i<=tempReadPerDay; i++){
		tempAveOfTheDay = i*tempReadPerDay/tempReadPerDay;
	}
	cout<<"The temprature reading average of the one day is: " << tempAveOfTheDay << endl;
	int tempAvgOfTenDay = tempAveOfTheDay * days;
	cout<<"The temprature average for 10 days is: " << tempAvgOfTenDay << endl;
	
	return 0;
}
