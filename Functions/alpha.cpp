#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char x;
	cout<<"Enter the Alphabet: ";
	cin >> x;
	if (isupper(x))
		cout << "You have entered the: "<< x <<" in the Upper-Case!";
	else
		cout << "You have entered the: "<< x <<" in the small-Case!";
	return 0;
}

