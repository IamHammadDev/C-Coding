#include <iostream>
#include <windows.h>
using namespace std;

void maze();
void gotoxy(int x, int y);
void erase(int x, int y);
void print(int x, int y);
char GetCharAtxy(short int x, short int y);

int main() {
    maze();
    int x = 3;
    int y = 20;
    gotoxy(x, y);
    cout << "P";
    bool gamerunning = true;

    while (gamerunning) {
        if (GetAsyncKeyState(VK_LEFT)) {
            char nextLocation = GetCharAtxy(x-1 , y);
		if(nextLocation == '%'|| nextLocation == '|') {
                cout << "Game Over! You hit a hurdle." << endl;
                erase(x, y);
                x -= 1;
                print(x, y);
                
            } else {
                gamerunning = false;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            erase(x, y);
            x += 1;
            print(x, y);
        }
        if (GetAsyncKeyState(VK_UP)) {
            erase(x, y);
            y -= 1;
            print(x, y);
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            erase(x, y);
            y += 1;
            print(x, y);
        }
        if (GetAsyncKeyState(VK_ESCAPE)) {
            gamerunning = false;
        }
        Sleep(100);
    }
    return 0;
}

void erase(int x, int y) {
    gotoxy(x, y);
    cout << " ";
}

void print(int x, int y) {
    gotoxy(x, y);
    cout << "P";
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char GetCharAtxy(short int x, short int y) {
    CHAR_INFO ci;
    COORD xy = { x, y };
    SMALL_RECT rect = { x, y, x, y };
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void maze() // MY MAZE
{ 
system("color 60");
cout<<"###################################################################################\n";
cout<<"||.. ...............................................................    ......   ||\n";
cout<<"||.. %%%%%%%%%%%%%%%%       ...           %%%%%%%%%%%%%%%         |%|..  %%%%    ||\n";
cout<<"||..       |%|    |%|    |%|...           |%|         |%|         |%|..   |%|    ||\n";
cout<<"||..       |%|    |%|    |%|...           |%|         |%|         |%|..   |%|    ||\n";
cout<<"||..       %%%%%%%%% . . |%|...           %%%%%%%%%%%%%%%            ..   %%% .  ||\n";
cout<<"||..       |%|       . . |%|...          ................  |%|       ..       .  ||\n";
cout<<"||..       %%%%%%%%%%. . |%|...          %%%%%%%%%%%%%     |%|       ..  %%%% .  ||\n";
cout<<"||..              |%|.                   |%|.......        |%|       ..   |%| .  ||\n";
cout<<"||..    ........  |%|.                   |%|.......|%|               ..   |%| .  ||\n";
cout<<"||..|%| |%|%%|%|. |%|. |%|                  .......|%|               ..   |%| .  ||\n";
cout<<"||..|%| |%|  |%|...    %%%%%%%%%%%%%%%%%%   .......|%|                .   |%| .  ||\n";
cout<<"||..|%| |%|  |%|...                ...|%|       %%%%%%               .    |%| .  ||\n";
cout<<"||..|%| %%%%%%%%%%%%%              ...|%|%%%%%%%%%%%%      |%|       ..   |%| .  ||\n";
cout<<"||.....................................................    |%|       ..........  ||\n";
cout<<"||                                                                      .......  ||\n";
cout<<"|||%|  |%|   |%| ..   %%%%%%%%%%%%%%%     ........|%|      |%|       ..........  ||\n";
cout<<"|||%|  |%|   |%|..             ...|%|          %%%%%%      |%|    |%|..........  ||\n";
cout<<"|||%|   %%%%%%%%%%%%           ...|%|                      |%|    |%|..........  ||\n";
cout<<"||.....................................................    |%|    |%|%%%%%%%%%   ||\n";
cout<<"||                                                         |%|    |%|%%%%%%%%%   ||\n";
cout<<"###################################################################################\n";                                                
}

