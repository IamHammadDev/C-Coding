#include <iostream>
using namespace std;
string EvenishOddish(int number){
	int digsum = 0;
	while(number>0){
		int digit = number % 10;
		digsum += digit;
		number /= 10;
	}
	if(digsum%2==0){
		return "Evenish";
	}else{
		return "Oddish";
	}
}
int main() {
    int number;
    cout << "Enter the number between 5 digits: ";
    cin >> number;
	string re = EvenishOddish(number);
	cout<<"The number is: " << re << ". " << endl;
    return 0;
}

