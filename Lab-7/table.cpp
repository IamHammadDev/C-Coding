#include<iostream>
using namespace std;
//function and its Prototyping
void printTable(int number){
	cout<<"Multiplication of Table of: " << number << endl;
	for(int i = 1; i <= 10; i = i + 1){
		cout<< number << " * " << i << " = " << (number * i) << endl;
	}
}
int main()
{
	// Call the printTable function for three different numbers
	printTable(24);
	printTable(50);
	printTable(29);
	return 0;
}
