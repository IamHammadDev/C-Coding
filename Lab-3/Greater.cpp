#include <iostream>
using namespace std;
void number(int num1, int num2);
int main() {
	int num1, num2;
	cout<<"Enter your 1st number: ";
	cin>> num1;
	cout<<"Enter your 2nd number: ";
	cin>> num2;
	number(num1 , num2);
    return 0;
}
void number(int num1, int num2)
{
	if(num1 > num2){
		cout<<"1st number is GREATER: " << num1 << endl;
	}else{
		cout<<"2nd number is GREATER: " << num2 << endl;
	}
}


