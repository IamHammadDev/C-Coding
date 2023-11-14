#include <iostream>
#include <string>

using namespace std;

string shiftAlphabet(const string& input) {
    string result = input;
    for (char &c : result) {
        if (isalpha(c)) {
            if (c == 'z') {
                c = 'a';
            } else if (c == 'Z') {
                c = 'A';
            } else {
                c = c + 1;
            }
        }
    }
    return result;
}

int main() {
    string input = "aslam";
    string output = shiftAlphabet(input);
    cout << "Input: " << input << "\n";
    cout << "Output: " << output << "\n";
    return 0;
}

