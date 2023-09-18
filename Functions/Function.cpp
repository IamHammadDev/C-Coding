#include<iostream>
using namespace std;
void add();
int main()
{
	add();
}

void add(){
	int a, b;
	cout<<"Enter value of a: ";
	cin>> a;
	cout<<"Enter the value of b: ";
	cin>> b;
	int sum;
	sum = a + b;
	cout<<"sum of two numbers: "<< sum << endl;
}
