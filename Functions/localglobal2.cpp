#include<iostream>
using namespace std;
int a = 20;
int sum(int a, int b);
int main()
{
	int a = 10, b = 20, c = 0;
	cout<<"Value of a in main(): " << a << endl;
	cout<<"Value of b in main(): " << b << endl;
	c = sum(a, b);
	cout<<"The value of c in main(): " << c << endl;
	return 0;
}
int sum(int a, int b)
{
	cout<<"Value of a in sum(): " << a << endl;
	cout<<"Value of b in sum(): " << b << endl;
	return a + b;
}
