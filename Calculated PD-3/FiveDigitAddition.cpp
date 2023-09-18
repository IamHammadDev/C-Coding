#include<iostream>
using namespace std;

int main()
{
	int number, sum;
	cout<<"Enter the 5 digit number: ";
	cin>> number;
	sum += number % 10;
	number /= 10;
	sum += number % 10;
	number /= 10;
	sum += number % 10;
	number /= 10;
	sum += number % 10;
	number /= 10;
	sum += number % 10;
	number /= 10;
	cout<<"Ther sum of 5 digits are: "<< sum;
	return 0;
	
}
