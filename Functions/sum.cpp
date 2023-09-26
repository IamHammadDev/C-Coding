#include<iostream>
using namespace std;
void sum(int a, int b);

int main()
{
	int a, b;
	cout<<"Enter the value of a: ";
	cin>> a;
	cout<<"Enter the value of b: ";
	cin>> b;
	sum(a, b);
	return 0;
}
void sum(int a, int b)
{
	int add;
	add = a + b;
	cout<<"sum of two numbers are: " << add << endl;
}
