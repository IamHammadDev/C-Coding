#include <iostream>
using namespace std;
// Function to find the frequency of a digit in a number
int frequencyChecker(int num, int dig){
	int frequency = 0;
	while(num != 0){
		// finding the last digit of given number
		int lastDigit = num % 10;
		if(lastDigit == dig){
		frequency = frequency + 1;
		}
		num = num / 10;
	}
	return frequency;
}
int main(){
	//entering number and digit
	int num, dig, result;
	cout<<"Enter the number: ";
	cin>> num;
	cout<<"Enter the digit: ";
	cin>> dig;
	//calling func
	result = frequencyChecker(num, dig);
	cout << "frequencyChecker(" << num << ", " << dig << ") " << result << endl;
	return 0;
}
