#include <iostream>
#include <string>
using namespace std;
string checkAlphabetCase(char input);
int main() {
    char userInput;
	cout << "Enter a character ('A' or 'a'): ";
	cin>> userInput;
	string check = checkAlphabetCase(userInput);
	cout<<"Your answer: " << "( " << userInput << " ): " << " " << check << endl;
    return 0;
}
string checkAlphabetCase(char input) {
    if (input >= 'A' && input <= 'Z') {
        return "You have entered an Alphabet in Capital Case";
    } else {
        return "You have entered an alphbet in small Case";
    }
}










//
//string result = checkAlphabetCase(userInput);
//	if (result == "You have entered ") {
//        result += (userInput == 'A') ? "Capital A" : "small a";
//    } else {
//        result += "Please enter 'A' or 'a'.";
//    }

