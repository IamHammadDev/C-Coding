#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char x;
	cout<<"Enter the Alphabet: ";
	cin >> x;
	if (isupper(x)){
		cout << "You have entered the: "<< x <<" in the Upper-Case!";
	}else if(islower(x)){
		cout << "You have entered the: "<< x <<" in the small-Case!";
	}	
	else{
		cout << "You have not entered the Alphabet! Please Enter the alphabet to check the validity" << x << endl;
	}
		
	return 0;
}

