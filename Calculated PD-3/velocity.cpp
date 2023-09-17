#include<iostream>
using namespace std;
int main()
{
	float iv, acc, t, fv;
	cout<<"Enter the Initial velocity of the toy: ";
	cin>> iv;
	cout<<endl;
	cout<<"Enter the Acceleration of the Toy: ";
	cin>> acc;
	cout<<endl;
	cout<<"Enter the time: ";
	cin>> t;
	cout<<endl;
	fv = iv + (acc * t);
	cout<<"The final velocity of toy car is: "<< fv <<endl;
	return 0;
}
