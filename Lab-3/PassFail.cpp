#include <iostream>
using namespace std;
void passFail(int num);
int main() {
	int num;
	cout<<"Enter your desired number: ";
	cin>> num;
	passFail(num);
    return 0;
}
void passFail(int num)
{
	if(num > 50)
	{
		cout<<"Pass: " << num << endl;
	}
	else {
		cout<<"Fails: " << num << endl;
	}
	
}


