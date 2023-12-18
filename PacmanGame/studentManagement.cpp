#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <conio.h>
#include <windows.h>

using namespace std;

void ccolor(int clr) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, clr);
}

void loadingbar() {
    for (int i = 15; i <= 100; i += 5) {
        system("cls");
        ccolor(14);
        cout << "\n\n\n\n\n\n\n\t\t\t";
        cout << i << " %% Loading...\n\n\t\t";
        cout << " ";
        for (int j = 0; j < i; j += 2) {
            cout << " ";
        }
        Sleep(50);
        if (i == 90 || i == 50 || i == 96 || i == 83) {
            Sleep(50);
        }
    }
    system("cls");
}

void intro() {
    ccolor(433);
    cout << "*****************************************************************" << endl
         << "*****************************************************************" << endl
         << "*************      STUDENT MONITORING SYSTEM       **************" << endl
         << "*************             MADE BY MR.ASHFAQUE ALI      **********" << endl
         << "*****************************************************************" << endl
         << "*****************************************************************" << endl
         << "_________________________________________________________________" << endl;
    getch();
}

void login() {
    ccolor(14);
    char ui[] = "ASHFAQUE";
    char psw[] = "3535";
    char gui[10], gpsw[10];
    cout << "\n\t\t______________________________" << endl
         << "\t\t|ENTER USER ID:-|";
    cin >> gui;
    cout << "\n\t\t______________________________" << endl
         << "\t\t|ENTER PASSWORD:-|";
    cin >> gpsw;
    if (strcmp(ui, gui) != 0 && strcmp(psw, gpsw) == 0) {
        ccolor(12);
        cout << "\t\tINVALID UI AND PASSWORD:";
        getch();
        exit(0);
    } else {
        cout << "\t\tLOGIN SUCCESSFULLY:-\n";
    }
}

void getdata(char name[], int& Roll_no, int& busno, int& age, char Pname[], char stdn[]) {
    fflush(stdin);
    cout << "\t**************************************************" << endl;
    cout << "\t* ENTER STUDENT NAME :";
    cin.getline(name, 29);
    fflush(stdin);
    cout << "\t**************************************************" << endl;
    cout << "\t* ENTER STUDENT ROLL.NO :";
    cin >> Roll_no;
    fflush(stdin);
    cout << "\t**************************************************" << endl;
    cout << "\t* ENTER STUDENT BUS NO :";
    cin >> busno;
    fflush(stdin);
    cout << "\t**************************************************" << endl;
    cout << "\t* ENTER STUDENT AGE :";
    cin >> age;
    fflush(stdin);
    cout << "\t**************************************************" << endl;
    fflush(stdin);
    cout << "\t* ENTER STUDENT FATHER NAME :";
    cin.getline(Pname, 29);
    fflush(stdin);
    cout << "\t**************************************************" << endl;
    cout << "\t* ENTER STUDENT STANDARD :";
    cin.getline(stdn, 9);
    fflush(stdin);
    cout << "\t**************************************************" << endl;
}

void showdata(const char name[], int Roll_no, int busno, int age, const char Pname[], const char stdn[]) {
    cout << "\t***************************************************" << endl;
    cout << "\t|                             |                   " << endl;
    cout << "\t|NAME of the student is       |->    " << name << "   " << endl;
    cout << "\t|                             |                   " << endl;
    cout << "\t|Roll.NO of the student is    |->       " << Roll_no << "          " << endl;
    cout << "\t|                             |                   " << endl;
    cout << "\t|BUS.NO of the student is     |->       " << busno << "         " << endl;
    cout << "\t|                             |                   " << endl;
    cout << "\t|Age of the student is        |->        " << age << "         " << endl;
    cout << "\t|                             |                   " << endl;
    cout << "\t|Father name of the student is|->     " << Pname << "  " << endl;
    cout << "\t|                             |                   " << endl;
    cout << "\t|Class of the student is      |->    " << stdn << "     " << endl;
    cout << "\t|                             |                   " << endl;
    cout << "\t***************************************************" << endl;
}

int storedata(const char name[], int Roll_no, int busno, int age, const char Pname[], const char stdn[]) {
    if (age == 0 && Roll_no == 0) {
        cout << "\n Student data not initialized : ";
        return 0;
    } else {
        ofstream fout;
        fout.open("file.dat", ios::app | ios::binary);
        fout.write((char*)&Roll_no, sizeof(Roll_no));
        fout.write((char*)&busno, sizeof(busno));
        fout.write((char*)&age, sizeof(age));
        fout.write(name, sizeof(name));
        fout.write(Pname, sizeof(Pname));
        fout.write(stdn, sizeof(stdn));
        fout.close();
        return 1;
    }
}

void viewAlldata() {
    ifstream fin;
    fin.open("file.dat", ios::in | ios::binary);
    if (!fin)
        cout << "error file not found:";
    else {
        int Roll_no, busno, age;
        char name[30], Pname[30], stdn[10];

        fin.read((char*)&Roll_no, sizeof(Roll_no));
        while (!fin.eof()) {
            fin.read((char*)&busno, sizeof(busno));
            fin.read((char*)&age, sizeof(age));
            fin.read(name, sizeof(name));
            fin.read(Pname, sizeof(Pname));
            fin.read(stdn, sizeof(stdn));

            showdata(name, Roll_no, busno, age, Pname, stdn);

            fin.read((char*)&Roll_no, sizeof(Roll_no));
        }
        fin.close();
    }
}

void searchData(const char t[]) {
    int count = 0;
    ifstream fin;
    fin.open("file.dat", ios::in | ios::binary);
    if (!fin)
        cout << "error file not found:";
    else {
        int Roll_no, busno, age;
        char name[30], Pname[30], stdn[10];

        fin.read((char*)&Roll_no, sizeof(Roll_no));
        while (!fin.eof()) {
            fin.read((char*)&busno, sizeof(busno));
            fin.read((char*)&age, sizeof(age));
            fin.read(name, sizeof(name));
            fin.read(Pname, sizeof(Pname));
            fin.read(stdn, sizeof(stdn));

            if (!strcmp(t, name)) {
                showdata(name, Roll_no, busno, age, Pname, stdn);
                count++;
            }

            fin.read((char*)&Roll_no, sizeof(Roll_no));
        }
        if (count == 0)
            cout << "\n record not found:";
        fin.close();
    }
}

void showsearch() {
    cout << "\t\t*************************************" << "\n";
    cout << "\t\t*                                   *" << "\n";
    cout << "\t\t*      STUDENT SEARCH OPTION        *" << "\n";
    cout << "\t\t*                                   *" << "\n";
    cout << "\t\t*************************************" << "\n";
    char ser[30];
    cout << "\t\t Enter Name of the student:";
    fflush(stdin);
    cin.getline(ser, 29);
    searchData(ser);
}

void deleteData(const char t[]) {
    ifstream fin;
    ofstream fout;
    fin.open("file.dat", ios::in | ios::binary);
    if (!fin) {
        ccolor(12);
        cout << "Error file not found:";
    } else {
        int Roll_no, busno, age;
        char name[30], Pname[30], stdn[10];

        fout.open("temp.dat", ios::out | ios::binary);
        fin.read((char*)&Roll_no, sizeof(Roll_no));
        while (!fin.eof()) {
            fin.read((char*)&busno, sizeof(busno));
            fin.read((char*)&age, sizeof(age));
            fin.read(name, sizeof(name));
            fin.read(Pname, sizeof(Pname));
            fin.read(stdn, sizeof(stdn));

            if (strcmp(name, t))
                fout.write((char*)&Roll_no, sizeof(Roll_no));
            fout.write((char*)&busno, sizeof(busno));
            fout.write((char*)&age, sizeof(age));
            fout.write(name, sizeof(name));
            fout.write(Pname, sizeof(Pname));
            fout.write(stdn, sizeof(stdn));

            fin.read((char*)&Roll_no, sizeof(Roll_no));
        }
        fin.close();
        fout.close();
        remove("file.dat");
        rename("temp.dat", "file.dat");
    }
}

void updateData(const char t[]) {
    fstream file;
    file.open("file.dat", ios::in | ios::out | ios::ate | ios::binary);
    file.seekg(0);
    int Roll_no, busno, age;
    char name[30], Pname[30], stdn[10];

    file.read((char*)&Roll_no, sizeof(Roll_no));
    while (!file.eof()) {
        file.read((char*)&busno, sizeof(busno));
        file.read((char*)&age, sizeof(age));
        file.read(name, sizeof(name));
        file.read(Pname, sizeof(Pname));
        file.read(stdn, sizeof(stdn));

        if (!strcmp(t, name)) {
            getdata(name, Roll_no, busno, age, Pname, stdn);
            file.seekp(file.tellp() - sizeof(Roll_no));
            file.write((char*)&Roll_no, sizeof(Roll_no));
            file.write((char*)&busno, sizeof(busno));
            file.write((char*)&age, sizeof(age));
            file.write(name, sizeof(name));
            file.write(Pname, sizeof(Pname));
            file.write(stdn, sizeof(stdn));
        }
        file.read((char*)&Roll_no, sizeof(Roll_no));
    }
    file.close();
}

int main() {
    loadingbar();
    intro();
    login();
    ccolor(929);
    int choice;
    while (choice != 6) {
        ccolor(929);
        system("cls");
        cout << "*****************************************************************" << "\n";
        cout << "***                                                           ***" << "\n";
        cout << "***              1. Insert Student record.                    ***" << "\n";
        cout << "***              2. View All Student record.                  ***" << "\n";
        cout << "***              3. Search Student record.                    ***" << "\n";
        cout << "***              4. Delete Student record.                    ***" << "\n";
        cout << "***              5. Update Student record.                    ***" << "\n";
        cout << "***              6. For Exit The Program.                     ***" << "\n";
        cout << "***                                                           ***" << "\n";
        cout << "*****************************************************************" << "\n";
        cout << "\n        Enter Your choice:";
        cin >> choice;
        switch (choice) {
            case 1: {
                char name[30], Pname[30], stdn[10];
                int Roll_no, busno, age;
                getdata(name, Roll_no, busno, age, Pname, stdn);
                storedata(name, Roll_no, busno, age, Pname, stdn);
                cout << "\n\t\t Data is Successfully Stored:";
                getch();
                break;
            }
            case 2:
                viewAlldata();
                getch();
                break;
            case 3:
                showsearch();
                getch();
                break;
            case 4: {
                cout << "\n\n Enter Student Name to delete a record:";
                char name[30];
                fflush(stdin);
                cin.getline(name, 29);
                deleteData(name);
                cout << "\n\t\t Data is Successfully Deleted:";
                getch();
                break;
            }
            case 5: {
                cout << "\n\n Enter Student Name to Update a record:";
                char name[30];
                fflush(stdin);
                cin.getline(name, 29);
                updateData(name);
                cout << "\n\t\t Data is Successfully Updated:";
                getch();
                break;
            }
            case 6:
                ccolor(558);
                cout << "\n\t\t Thank You For using This Application:";
                cout << "\n\t\t Enter Any Key To Exit:-";
                getch();
                exit(0);
                break;
            default:
                ccolor(12);
                cout << "Invalid Input Try Again:";
                getch();
        }
    }
    getch();
    return 0;
}

