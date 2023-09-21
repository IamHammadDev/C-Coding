#include <iostream>
using namespace std;
void add(int num1, int num2);
int main() {
	int num1, num2, sum;
	char op;
	cout<<"Enter the 1st number: ";
	cin>> num1;
	cout<<"Enter the 2nd number: ";
	cin>> num2;
	cout<<"Enter the operator (+, -, /, %, *) and only works with + and ends with others: ";
	cin>> op;
	if(op == '+')
	{
		add(num1, num2);
	}
	else{
		cout<<"You are only allowed to enter the + operator";
	}
    return 0;
}
void add(int num1, int num2)
{
	int sum;
	sum = num1 + num2;
	cout<<"Total sum of the two numbers are: " << sum << endl;
}


