#include <iostream>
using namespace std;
int main() {
    int totalSeconds;
    
    // Input the total number of seconds
    cout << "Enter the time in seconds: ";
    cin >> totalSeconds;

    // Calculate hours, minutes, and remaining seconds
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    // Print the time in "hh:min:sec" format
    cout << "Time in hh:min:sec format: " << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                          
