#include <iostream>
using namespace std;

// Function to convert a digit into its text representation
string convertDigitToText(int digit) {
    switch (digit) {
        case 1: return "One";
        case 2: return "Two";
        case 3: return "Three";
        case 4: return "Four";
        case 5: return "Five";
        case 6: return "Six";
        case 7: return "Seven";
        case 8: return "Eight";
        case 9: return "Nine";
        default: return ""; // Empty string for 0
    }
}

// Function to convert a two-digit number into its English text representation
string convertNumberToText(int number) {
    if (number >= 1 && number <= 9) {
        return convertDigitToText(number);
    } else if (number >= 10 && number <= 19) {
        switch (number) {
            case 10: return "Ten";
            case 11: return "Eleven";
            case 12: return "Twelve";
            case 13: return "Thirteen";
            case 14: return "Fourteen";
            case 15: return "Fifteen";
            case 16: return "Sixteen";
            case 17: return "Seventeen";
            case 18: return "Eighteen";
            case 19: return "Nineteen";
            default: return ""; // Empty string for invalid input
        }
    } else if (number >= 20 && number <= 99) {
        int tens = number / 10;
        int ones = number % 10;
        string text = "";

        switch (tens) {
            case 2: text = "Twenty"; break;
            case 3: text = "Thirty"; break;
            case 4: text = "Forty"; break;
            case 5: text = "Fifty"; break;
            case 6: text = "Sixty"; break;
            case 7: text = "Seventy"; break;
            case 8: text = "Eighty"; break;
            case 9: text = "Ninety"; break;
        }

        if (ones != 0) {
            text += "-" + convertDigitToText(ones);
        }

        return text;
    } else {
        return "Invalid input";
    }
}

int main() {
    int number;

    cout << "Enter a two-digit number (1-99): ";
    cin >> number;

    if (number >= 1 && number <= 99) {
        string text = convertNumberToText(number);
        cout << "The English text representation is: " << text << endl;
    } else {
        cout << "Invalid input. Please enter a two-digit number between 1 and 99." << endl;
    }

    return 0;
}

