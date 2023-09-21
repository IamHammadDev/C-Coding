#include <iostream>
using namespace std;
void evenOdd(int num);
int main() {
	int num;
	cout<<"Enter the number (Even or Odd): ";
	cin>> num;
	evenOdd(num);
    return 0;
}
void evenOdd(int num)
{
	if(num%2==0){
	cout<<"You entered an Even number: " << num << endl;
	}else{
		cout<<"You entered an Odd number: " << num << endl;
	}
}



