#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

// Function prototypes
void header();
int menu();
void enterStudentData(string &name, double &matricMarks, double &interMarks, double &ecatMarks);
double calculateAggregate(double matricMarks, double interMarks, double ecatMarks);
void displayStudentData(int roll, string name, double aggregate);
void compareAndDisplay(int roll1, string name1, double aggregate1, int roll2, string name2, double aggregate2);

int main() {
    string std1_name, std2_name;
    double std1_matricMarks, std2_matricMarks;
    double std1_interMarks, std2_interMarks;
    double std1_ecatMarks, std2_ecatMarks;
    double std1_aggregate = 0, std2_aggregate = 0;
    int option, std1_roll = 1, std2_roll = 2;

    while (true) {
        header();
        option = menu();

        if (option == 1) {
            enterStudentData(std1_name, std1_matricMarks, std1_interMarks, std1_ecatMarks);
            std1_aggregate = calculateAggregate(std1_matricMarks, std1_interMarks, std1_ecatMarks);
            cout << "Aggregate for the first student: " << std1_aggregate * 100 << "%" << endl;
        } else if (option == 2) {
            enterStudentData(std2_name, std2_matricMarks, std2_interMarks, std2_ecatMarks);
            std2_aggregate = calculateAggregate(std2_matricMarks, std2_interMarks, std2_ecatMarks);
            cout << "Aggregate for the second student: " << std2_aggregate * 100 << "%" << endl;
        } else if (option == 3) {
            if (std1_aggregate == 0) {
                cout << "Aggregate for the first student is not calculated yet." << endl;
            } else {
                cout << "Aggregate for the first student: " << std1_aggregate * 100 << "%" << endl;
            }
        } else if (option == 4) {
            if (std2_aggregate == 0) {
                cout << "Aggregate for the second student is not calculated yet." << endl;
            } else {
                cout << "Aggregate for the second student: " << std2_aggregate * 100 << "%" << endl;
            }
        } else if (option == 5) {
            if (std1_aggregate == 0 && std2_aggregate == 0) {
                cout << "Both students aggregates are not calculated yet." << endl;
            } else {
                compareAndDisplay(std1_roll, std1_name, std1_aggregate, std2_roll, std2_name, std2_aggregate);
            }
        } else if (option == 6) {
            cout << "Exiting the program." << endl;
            break;
        }

        cout << "Press any key to continue: ";
        getch();
        system("cls");
    }

    return 0;
}

// Function definitions

void header() {
    cout << "************************************************************" << endl;
    cout << "*             University Management System                 *" << endl;
    cout << "************************************************************" << endl;
    cout << endl;
}

int menu() {
    cout << "1. Enter data for the first student" << endl;
    cout << "2. Enter data for the second student" << endl;
    cout << "3. Calculate aggregate for the first student" << endl;
    cout << "4. Calculate aggregate for the second student" << endl;
    cout << "5. Determine the student with the higher aggregate for roll number 1" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your option: ";
    int option;
    cin >> option;
    return option;
}

void enterStudentData(string &name, double &matricMarks, double &interMarks, double &ecatMarks) {
    cout << "Enter name of the student: ";
    cin >> name;
    cout << "Enter matric marks (out of 1100): ";
    cin >> matricMarks;
    cout << "Enter inter marks (out of 510): ";
    cin >> interMarks;
    cout << "Enter Ecat marks (out of 400): ";
    cin >> ecatMarks;
}

double calculateAggregate(double matricMarks, double interMarks, double ecatMarks) {
    return (0.25 * matricMarks / 1100.0) + (0.45 * interMarks / 510.0) + (0.30 * ecatMarks / 400.0);
}

void displayStudentData(int roll, string name, double aggregate) {
    cout << roll << "\t\t" << name << "\t\t" << aggregate * 100 << "%" << endl;
}

void compareAndDisplay(int roll1, string name1, double aggregate1, int roll2, string name2, double aggregate2) {
    cout << "Both students data: " << endl;
    cout << "Roll Number\tName\t\tAggregate" << endl;

    if (aggregate1 > aggregate2) {
        displayStudentData(roll1, name1, aggregate1);
        displayStudentData(roll2, name2, aggregate2);
    } else if (aggregate2 > aggregate1) {
        displayStudentData(roll2, name2, aggregate2);
        displayStudentData(roll1, name1, aggregate1);
    } else {
        cout << "Both students have the same aggregate for roll number 1." << endl;
    }
}

