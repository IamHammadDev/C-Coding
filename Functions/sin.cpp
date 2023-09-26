#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double num1;
	cout<<"Enter the number to find its sin(): ";
	cin>> num1;
	int pre = ceil(sin(num1));
	cout<<"sin() of the given number is: " << pre << endl;
	return 0;
}
