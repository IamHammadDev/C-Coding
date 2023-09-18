#include<iostream>
using namespace std;
void Add(int num1, int num2);
void Mult(int num1, int num2);
int main()
{
	int num1, num2;
	char op;
	cout<<"Enter the 1st number: ";
	cin>> num1;
	cout<<"Enter the 2nd number: ";
	cin>> num2;
	cout<<"Enter the Operation you want to apply + or *: ";
	cin>> op;
	if(op == '+')
	{	
		Add(num1, num2);
	}
	if(op == '*')
	{
		Mult(num1,num2);
	}
	
	
	return 0;
}

void Add(int num1, int num2)
{
	int sum;
	sum = num1 + num2;
	cout<<"sum of the two number are: "<< sum << endl;
}

void Mult(int num1, int num2)
{
	int mult;
	mult = num1 * num2;
	cout<<"Multiplication of the Two number are: " << mult << endl;
}
