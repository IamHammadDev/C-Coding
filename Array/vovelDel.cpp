#include <iostream>
#include <string>

using namespace std;

string removeVowels(string str) {
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (tolower(ch) != 'a' && tolower(ch) != 'e' && tolower(ch) != 'i' && tolower(ch) != 'o' && tolower(ch) != 'u') {
            result += ch;
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result = removeVowels(str);

    cout << "Your Entered String: " << str << ", After Removal Vowels from the string: " << result << endl;

    return 0;
}

