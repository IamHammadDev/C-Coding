#include <iostream>
using namespace std;
int main() {
	while(true)
	{
		double temp;
		cout<<"Enter the patient's temperature in Fahrenheit: ";
		cin>> temp;
		 // Check if the temperature is normal (98.6 Fahrenheit)
        if (temp == 98.6) {
            cout << "Normal" << endl;
            break;
        } else {
            cout << "Abnormal" << endl;
        }
	}
    return 0;
}

