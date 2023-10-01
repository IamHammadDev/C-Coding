#include <iostream>
#include <windows.h>
using namespace std;

int x = 4;  // Declare x and y as global variables
int y = 4;

void maze();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void erasePacman();
void printPacman();

int main() {
    bool gameRunning = true;
    system("cls");
    maze();
    gotoxy(x, y);
    cout << "P";

    while (gameRunning) {
        if (GetAsyncKeyState(VK_LEFT)) {
            erasePacman();
            x = x - 1;
            printPacman();
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            erasePacman();
            x = x + 1;
            printPacman();
        }
        if (GetAsyncKeyState(VK_UP)) {
            erasePacman();
            y = y - 1;
            printPacman();
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            erasePacman();
            y = y + 1;
            printPacman();
        }
        if (GetAsyncKeyState(VK_ESCAPE)) {
            gameRunning = false;
        }
        Sleep(200);
    }

    return 0;
}

char getCharAtxy(short int x, short int y) {
    CHAR_INFO ci;
    COORD xy = { 0, 0 };
    SMALL_RECT rect = { x, y, x, y };
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void maze() {
    cout << "% % % % % % % % % %" << endl;
    cout << "%                 %" << endl;
    cout << "%                 %" << endl;
    cout << "%                 %" << endl;
    cout << "%                 %" << endl;
    cout << "%                 %" << endl;
    cout << "%                 %" << endl;
    cout << "%                 %" << endl;
    cout << "%                 %" << endl;
    cout << "%                 %" << endl;
    cout << "% % % % % % % % % %" << endl;
}

void erasePacman() {
    gotoxy(x, y);
    cout << " ";
}

void printPacman() {
    gotoxy(x, y);
    cout << "P";
}

