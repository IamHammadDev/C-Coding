#include <iostream>
using namespace std;

int main() {
    int hour, minute;
    cout<<"Enter the hour(0-23): ";
    cin>> hour;
    cout<<"Enter the minute(0-59): ";
    cin>> minute;
    minute += 15;
    if(minute>=60){
    	hour += 1;
    	minute -= 60;
	}
	if(hour==24){
		hour=0;
	}
	// Print the result in hh:mm format
    if (hour < 10) {
       cout << "0" << hour;
    } else {
        cout << hour;
    }

    cout << ":";

    if (minute < 10) {
        cout << "0" << minute;
    } else {
        cout << minute;
    }
    cout<<endl;
    return 0;
}

