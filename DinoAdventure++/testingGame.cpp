#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <fstream>

using namespace std;

int DinoY, speed = 40;
string playerName;
static int score = 0;
int gameOver = 0; // Declare HurdPo as a global variable
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void setcursor(bool visible, DWORD size) {
    if (size == 0) {
        size = 20;
    }
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, &lpCursor);
}
//void setColor(int color) {
//    SetConsoleTextAttribute(console, color);
//}

void init() {
    system("cls");
    gameOver = 0;
    gotoxy(3, 2);
    cout << "SCORE : ";
    for (int i = 0; i < 79; i++) {
        gotoxy(1 + i, 1);
        cout << "ß";
        gotoxy(1 + i, 25);
        cout << "ß";
    }
}

void Dino(int jump = 0) {
    static int DinoAnime = 1; // Make DinoAnime static to retain its value between function calls
    if (jump == 0) {
        DinoY = 0;
    } else if (jump == 2) {
        DinoY--;
    } else {
        DinoY++;
    }

    gotoxy(2, 15 - DinoY);
    cout << "                 ";
    gotoxy(2, 16 - DinoY);
    cout << "         ÜÛßÛÛÛÛÜ";
    gotoxy(2, 17 - DinoY);
    cout << "         ÛÛÛÛÛÛÛÛ";
    gotoxy(2, 18 - DinoY);
    cout << "         ÛÛÛÛÛßßß";
    gotoxy(2, 19 - DinoY);
    cout << " Û      ÜÛÛÛÛßßß ";
    gotoxy(2, 20 - DinoY);
    cout << " ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ";
    gotoxy(2, 21 - DinoY);
    cout << " ßÛÛÛÛÛÛÛÛÛÛÛ  ß ";
    gotoxy(2, 22 - DinoY);
    cout << "   ßÛÛÛÛÛÛÛß     ";
    gotoxy(2, 23 - DinoY);

    if (jump == 1 || jump == 2) {
        cout << "    ÛÛß ßÛ       ";
        gotoxy(2, 24 - DinoY);
        cout << "    ÛÜ   ÛÜ      ";
    } else if (DinoAnime == 1) {
        cout << "    ßÛÛß  ßßß    ";
        gotoxy(2, 24 - DinoY);
        cout << "      ÛÜ         ";
        DinoAnime = 2;
        score++;
    } else if (DinoAnime == 2) {
        cout << "     ßÛÜ ßÛ      ";
        gotoxy(2, 24 - DinoY);
        cout << "          ÛÜ     ";
        DinoAnime = 1;
        score++;
    }

    gotoxy(2, 25 - DinoY);
    if (jump != 0) {
        cout << "                ";
    } else {
        cout << "ßßßßßßßßßßßßßßßßß";
    }
    Sleep(speed);
}

//void Object() {
//    static int HurdPo = 0;
//    static int score = 0;
//    if (HurdPo == 56 && DinoY < 4) {
//        score = 0;
//        speed = 40;
//        gotoxy(36, 8);cout<<"Game Over";
//        getch();
//        gameOver = 1;
////        return 0;
//    }
//
//    gotoxy(74 - HurdPo, 20);
//    cout << "| | ";
//    gotoxy(74 - HurdPo, 21);
//    cout << "| | ";
//    gotoxy(74 - HurdPo, 22);
//    cout << "|_| ";
//    gotoxy(74 - HurdPo, 23);
//    cout << " |  ";
//    gotoxy(74 - HurdPo, 24);
//    cout << " |  ";
//    HurdPo++;
//
//    if (HurdPo == 73) {
//        HurdPo = 0;
//        score++;
//        gotoxy(70, 2);
//        cout << "     ";
//        gotoxy(70, 2);
//        cout << score;
//
//        if (speed > 20)
//            speed--;
//    }
//}
void Object() {
    static int HurdPo = 0;
//    static int score = 0;
    if (HurdPo == 56 && DinoY < 4) {
        score = 0;
        speed = 40;
        gotoxy(36, 8);
        cout << "Game Over";
        getch();
        gameOver = 1;
    }

    gotoxy(74 - HurdPo, 20);
    cout << "| | ";
    gotoxy(74 - HurdPo, 21);
    cout << "| | ";
    gotoxy(74 - HurdPo, 22);
    cout << "|_| ";
    gotoxy(74 - HurdPo, 23);
    cout << " |  ";
    gotoxy(74 - HurdPo, 24);
    cout << " |  ";
    HurdPo++;

    if (HurdPo == 73) {
        HurdPo = 0;
        score++;
        gotoxy(70, 2);
        cout << "     ";
        gotoxy(70, 2);
        cout << score;

        if (speed > 20)
            speed--;

        // Toggle console color every 5 points
//        if (score % 5 == 0) {
//            if (score / 5 % 2 == 0) {
//                setColor(15); // White
//            } else {
//                setColor(0); // Black
//            }
        }
    }


// Function to save player record to a file
void SavePlayerRecord(string playerName, int Playerscore) {
    string fileName = playerName + "_record.txt";
    ofstream file(fileName.c_str(), ios::app); // Convert string to const char*
    if (file.is_open()) {
        file << Playerscore << endl;
        file.close();
    } else {
        cout << "Unable to open file for saving player record." << endl;
    }
}

void DisplayPlayerRecords(string playerName) {
    string fileName = playerName + "_record.txt";
    ifstream file(fileName.c_str()); // Convert string to const char*
    if (file.is_open()) {
        cout << "\nPlayer Records for " << playerName << ":\n";
        int Playerscore;
        while (file >> Playerscore) {
            cout << "Score: " << Playerscore << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file for reading player records." << endl;
    }
}

void Play() {
    init();
    string playerName;
    int Playerscore = 0;
    gotoxy(85, 2);
    cout << "Enter your name: ";
    cin >> playerName;
    char ch;
    int i;
    while (true) {
        while (!kbhit()) {
            Dino();
            Object();
            if (gameOver) {
                gotoxy(36, 8);
                cout << "Game Over!";
                SavePlayerRecord(playerName, Playerscore); // Save player record
                getch();
                return;
            }
            Playerscore++;
        }
        
        ch = getch();
        if (ch == ' ') {
            for (i = 0; i < 10; i++) {
                Dino(1);
                Object();
                if (gameOver) {
                    SavePlayerRecord(playerName, Playerscore);
                    return;
                }
            }

            for (i = 0; i < 10; i++) {
                Dino(2);
                Object();
                if (gameOver) {
                    SavePlayerRecord(playerName, Playerscore);
                    return;
                }
            }
        } else if (ch == 'X' || ch == 'x') {
            getch();
        } else if (ch == 27) {
            break;
        }
        Playerscore++;
            gotoxy(70, 2);
            cout << "     ";
            gotoxy(70, 2);
            cout << Playerscore;
    }
}

void instructions() {
    system("cls");
    cout << "Instructions";
    cout << "\n----------------";
    cout << "\n1. Avoid hurdles by jumping";
    cout << "\n2. Press 'Spacebar' to jump ";
    cout << "\n3. Press 'p' to pause game ";
    cout << "\n4. Press 'Escape' to exit from game";
    cout << "\n\nPress any key to go back to menu";
    getch();
}

int main() {
//    system("mode con: lines=29 cols=82");
    setcursor(0, 0);
    bool gameRunning = true;
    while (gameRunning) {
        system("cls");
        gotoxy(10, 5);
        cout << " ---------------------------------- ";
        gotoxy(10, 6);
        cout << " |        DINO ADVENTURE++        | ";
        gotoxy(10, 7);
        cout << " ---------------------------------- ";
        gotoxy(10, 9);
        cout << "1. Start Game";
        gotoxy(10, 10);
        cout << "2. Instructions";
        gotoxy(10, 11);
        cout << "3. View Records";
        gotoxy(10, 12);
        cout << "4. Quit";
        gotoxy(10, 14);
        cout << "Select option: ";
        char op = getche();
        if (op == '1') {
            Play();
        } else if (op == '2') {
            instructions();
        } else if (op == '3') {
            DisplayPlayerRecords(playerName);
            cout << "\nPress any key to go back to menu";
            getch();
        } else if (op == '4') {
            exit(0);
        }
    }
    return 0;
}
//score is a global varibale and I need to make it pointer then swap its address to playerscore and then defference it
