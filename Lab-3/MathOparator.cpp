#include <iostream>
using namespace std;
void divi(int num1, int num2);
void mult(int num1, int num2);
void add(int num1, int num2);
void subt(int num1, int num2);
void modulu(int num1, int num2);
int main() {
	int num1, num2;
	char op;
	cout<<"Enter the 1st number: ";
	cin>> num1;
	cout<<"Enter the 2nd number: ";
	cin>> num2;
	cout<<"Enter the operator between (+, -, *, %, /): ";
	cin>> op;
	if(op == '+')
	{
		add(num1, num2);
	}
	if(op == '-')
	{
		subt(num1, num2);
	}
	if(op == '*')
	{
		mult(num1, num2);
	}
	if(op == '/')
	{
		divi(num1, num2);
	}
	if(op == '%')
	{
		modulu(num1, num2);
	}
//	else
//	{
//		cout<<"You have not enter the correct operator";
//	}
    return 0;
}
void add(int num1, int num2)
{
	int sum;
	sum = num1 + num2;
	cout<<"Addition of two Numbers: " << sum << endl;
}
void divi(int num1, int num2)
{
	float div;
	div = num1 / num2;
	cout<<"Division of two numbers: " << div << endl;
}
void mult(int num1, int num2)
{
	int mul;
	mul = num1 * num2;
	cout<<"Multiplification of two numbers: " << mul << endl;
}
void subt(int num1, int num2)
{
	int sub;
	sub = num1 - num2;
	cout<<"subtraction of two Numbers: " << sub << endl;
}
void modulu(int num1, int num2)
{
	int mod;
	mod = num1 % num2;
	cout<<"Modulus of two numbers: " << mod << endl;
}
