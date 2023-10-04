/*
The program calculates how many times Vladimir plays volleyball in a year based on whether it's a leap year,
 the number of holidays when he plays, and the weekends he spends in his hometown.
 It accounts for extra volleyball during leap years and returns the nearest whole number of games played.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string yearType;
    int holidays, weekendsInHometown;

    // Input data
    cout<<"Enter the year type leap / normal: ";
    cin >> yearType;
     cout<<"Enter the holidays in the whole year : ";
    cin >> holidays;
    cout<<"Enter the WeekEnd in the HomeTown: ";
    cin >> weekendsInHometown;

    // Calculate the number of volleyball games
    // 48 weekends in a year
    int weekendsInSofia = 48 - weekendsInHometown;  
    int volleyballCount = 0;

    if (yearType == "leap") {
    	// 75% of weekends in Sofia
        volleyballCount += ceil(weekendsInSofia * (3.0 / 4.0));  
        // 2/3 of holidays with 15% bonus
        volleyballCount += ceil((holidays * 2.0 / 3.0) * 1.15);  
        volleyballCount += weekendsInHometown;
    } else if (yearType == "normal") {
    	// 75% of weekends in Sofia
        volleyballCount += ceil(weekendsInSofia * (3.0 / 4.0));  
        // 2/3 of holidays
        volleyballCount += ceil((holidays * 2.0 / 3.0));         
        volleyballCount += weekendsInHometown;
    }

    cout << volleyballCount << endl;

    return 0;
}

