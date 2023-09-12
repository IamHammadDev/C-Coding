#include<iostream>
using namespace std;
int main()
{
	float charge, time, current;
	cout<<"Enter the Charge on a particle: ";
	cin>> charge;
	cout<<"Enter the time of passing a charge from a particle: ";
	cin>> time;
	current = charge/time;
	cout<<"Total charge on a particle: "<<current<<endl;
	return 0;
}
