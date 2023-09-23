#include <iostream>
#include <windows.h> // for sleep function

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int x = 10; // starting x position
    int y = 5;  // starting y position
    int direction = 1; // 1 indicates moving downwards, -1 indicates moving upwards

    while (true) {
        gotoxy(x, y);
        std::cout << "Pacman";

        Sleep(200); // pause for a short duration

        gotoxy(x, y);
        std::cout << "       "; // erase Pacman

        y += direction; // move Pacman vertically

        // Check if Pacman has reached the top or bottom of the maze
        if (y == 1 || y == 10) {
            direction *= -1; // reverse the direction
        }
    }

    return 0;
}
