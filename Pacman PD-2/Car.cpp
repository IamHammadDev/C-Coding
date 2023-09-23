#include<iostream>
#include<windows.h>
using namespace std;
void carChallenge(int speed);
int main()
{
	int speed;
	cout<<"Enter your car's speed in (km/h) to check the validity of speed limit: ";
	cin>> speed;
	carChallenge(speed);
	return 0;
}
void carChallenge(int speed){
	if(speed > 100)
	{
		cout<<"Halt….YOU WILL BE CHALLENGED!!!";
	}
	else{
		cout<<"Perfect! You’re going good.";
	}
}
