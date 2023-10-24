#include <iostream>
using namespace std;

int main()
{
    int num, rev=0;
    cout<<"Enter the number to check its reverse: ";
    cin>> num;
    while(num>0){
    	rev = (rev*10)+num%10;
    	num /= 10;
	}
	cout<<"The reverse of the number is: " << rev;
    return 0;
}




















//int n, num, digit, rev = 0;
//     cout << "Enter a positive number: ";
//     cin >> num;
//     n = num;
//     do
//     {
//        digit = num % 10;
//        rev = (rev * 10) + digit;
//        num = num / 10;
//     } while (num != 0);
//     cout << " The reverse of the number is: " << rev << endl;
//     if (n == rev)
//         cout << " The number is a symettric.";
//     else
//         cout << " The number is not a symettric.";
