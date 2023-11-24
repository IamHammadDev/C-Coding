#include<iostream>
using namespace std;

double calTotalResistance(int n, double resistance[]) {
    double totalResistance = 0;
    for (int i = 0; i < n; i++) {
        totalResistance += resistance[i];
    }
    return totalResistance;
}
//for displaying the array
void arrayDisplay(int n, double arrD[]) {
    cout << "array: {";
    for (int i = 0; i < n; i++) {
        cout << arrD[i] << ",";
    }
    cout << "}" << endl;
}

int main() {
    int n;
    cout << "Enter the size of arrays: ";
    cin >> n;
    double arrR1[n];
    double arrR2[n];
    double arrR3[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the value for R1: ";
        cin >> arrR1[i];
        cout << "Enter the value for R2: ";
        cin >> arrR2[i];
        cout << "Enter the value for R3: ";
        cin >> arrR3[i];
    }
    cout << "Array 1: ";
    arrayDisplay(n, arrR1);
    cout << calTotalResistance(n, arrR1) << " ohms total Resistance in array 1!" << endl;

    cout << "Array 2: ";
    arrayDisplay(n, arrR2);
    cout << calTotalResistance(n, arrR2) << " ohms total Resistance in array 2!" << endl;

    cout << "Array 3: ";
    arrayDisplay(n, arrR3);
    cout << calTotalResistance(n, arrR3) << " ohms total Resistance in array 3!" << endl;
	// Print total resistance of all arrays
    cout << "Total Resistance of all arrays: " << calTotalResistance(n, arrR1) + calTotalResistance(n, arrR2) + calTotalResistance(n, arrR3) << " ohms" << endl;
    return 0;
}

