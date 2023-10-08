#include <iostream>
#include<Math.h>
using namespace std;

int main() {
    int examStartHour, examStartMinute, arrivalHour, arrivalMinute;

    // Input exam starting time (hours and minutes)
    cout<<"Exam Starting Time (hour): ";
    cin >> examStartHour;
    cout<<"Exam Starting Time (minutes): ";
	cin>> examStartMinute;

    // Input student's arrival time (hours and minutes)
    cout<<"Student hour of arrival: ";
    cin >> arrivalHour;
    cout<<"Student minute of arrival: ";
	cin>> arrivalMinute;

    // Calculate total minutes for exam starting time and arrival time
    int examTotalMinutes = examStartHour * 60 + examStartMinute;
    int arrivalTotalMinutes = arrivalHour * 60 + arrivalMinute;

    // Calculate the time difference in minutes
    int timeDifference = arrivalTotalMinutes - examTotalMinutes;

    if (timeDifference > 0) {
        // Student is late
        cout << "Late" << endl;
        if (timeDifference >= 60) {
            int hoursLate = timeDifference / 60;
            int minutesLate = timeDifference % 60;
            cout << hoursLate << ":" << (minutesLate < 10 ? "0" : "") << minutesLate << " hours after the start" << endl;
        } else {
            cout << timeDifference << " minutes after the start" << endl;
        }
    } else if (timeDifference >= -30) {
        // Student is on time (arrives up to 30 minutes earlier)
        cout << "On time" << endl;
        if (timeDifference < 0) {
            cout << abs(timeDifference) << " minutes before the start" << endl;
        }
    } else {
        // Student is early (arrives more than 30 minutes earlier)
        cout << "Early" << endl;
        int minutesEarly = abs(timeDifference);
        if (minutesEarly >= 60) {
            int hoursEarly = minutesEarly / 60;
            minutesEarly %= 60;
            cout << hoursEarly << ":" << (minutesEarly < 10 ? "0" : "") << minutesEarly << " hours before the start" << endl;
        } else {
            cout << minutesEarly << " minutes before the start" << endl;
        }
    }

    return 0;
}

