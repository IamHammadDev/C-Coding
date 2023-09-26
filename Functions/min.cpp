#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num1, num2;
	cout<<"Enter the 1st number: ";
	cin>> num1;
	cout<<"Enter the 2nd number: ";
	cin>> num2;
	cout<<"smaller number is: " << min(num1, num2) << endl;
	return 0;
}
