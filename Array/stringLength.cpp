#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;

    cout << "Enter a string: ";
    getline(cin, userInput); // Allows spaces in the input

    int length = userInput.length();

    bool isEven = (length % 2 == 0);
    bool boolalpha;
	if(isEven){
		boolalpha = true;
		cout << "Length of the string is even: " << boolalpha << " " << " length: " << length << endl;
	}else{
		boolalpha = false;
		cout << "Length of the string is odd: " << boolalpha << " " << " length: " << length << endl;
	}
    

    return 0;
}

