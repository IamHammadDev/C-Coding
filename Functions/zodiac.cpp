#include <iostream>
using namespace std;

int main() {
    int day, month;

    // Input the date of birth
    cout << "Enter the day of birth (1-31): ";
    cin >> day;

    cout << "Enter the month of birth (1-12): ";
    cin >> month;

    // Validate the input for day and month
    if ((day >= 1 && day <= 31) && (month >= 1 && month <= 12)) {
        // Determine the zodiac sign based on the input date and month
        string zodiacSign;
        if ((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        	zodiacSign = "Aries, The Ram";
		}
        else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)){
            zodiacSign = "Taurus, The Bull";
		}
        else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)){
        	zodiacSign = "Gemini, The Twins";
		}
        else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)){
        	zodiacSign = "Cancer, The Crab";
		}
        else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        	zodiacSign = "Leo, The Lion";
		}
        else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)){
        	zodiacSign = "Virgo, The Virgin";
		}
        else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)){
        	zodiacSign = "Libra, The Scales";
		}
        else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)){
        	zodiacSign = "Scorpio, The Scorpion";
		}
        else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)){
        	zodiacSign = "Sagittarius, The Archer";
		}
        else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)){
        	zodiacSign = "Capricorn, The Goat";	
		}
        else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)){
        	zodiacSign = "Aquarius, The Water Bearer";
		}
        else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)){
        	zodiacSign = "Pisces, The Fishes";
		}
        // Display the determined zodiac sign
        cout << "Zodiac Sign: " << zodiacSign << endl;
    } else {
        cout << "Invalid date or month entered." << endl;
    }

    return 0;
}

