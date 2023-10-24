/*
This program will simulate the scenario where patients arrive at the hospital for examination,
doctors treat them, and additional doctors are appointed as needed every third day.
It will provide you with the counts of treated and untreated patients at the end of the specified period
*/
#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int prd;
    cout<<"Enter the Period: ";
    cin >> prd;

    int treatedPatients = 0;
    int untreatedPatients = 0;
    int docs = 7;

    for (int day = 1; day <= prd; day++) {
        int patientsToday;
        cin >> patientsToday;

        // Check if it's a multiple of 3 days
        if (day % 3 == 0) {
            if (untreatedPatients > treatedPatients) {	
                docs++;
            }
        }

        int patientsTreatedToday = min(patientsToday, docs);

        treatedPatients += patientsTreatedToday;
        untreatedPatients += (patientsToday - patientsTreatedToday);
    }

    cout << "Treated patients: " << treatedPatients  << endl;
    cout << "Untreated patients: " << untreatedPatients << endl;

    return 0;
}


