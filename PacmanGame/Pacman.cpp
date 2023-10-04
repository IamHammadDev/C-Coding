#include <iostream>
#include <windows.h>
using namespace std;
// Declare x and y as global variables
int x = 3;  
int y = 20;

void maze();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void erase(int x , int y);
void print(int x , int y);

int main() {
    bool gameRunning = true;
    system("cls");
    maze();
    gotoxy(x, y);
    cout << "P";

    while (gameRunning) {
        if (GetAsyncKeyState(VK_LEFT)) {
        	 char nextLocation = GetCharAtxy(x-1 , y);
			if(nextLocation == '%'|| nextLocation == '|')
			{
			erase(x , y);
			x -= 1;
	 		print(x , y);
	
		}
		else 
		{
			gamerunning= false;

		}
            
        }
        	if(GetAsyncKeyState(VK_RIGHT)) // FOR MOVING RIGHTWARD
	{
		erase(x , y);
		x += 1;
	print(x, y);
	}
		if(GetAsyncKeyState(VK_UP)) // FOR MOVING UP
	{
        erase(x , y);
		y -= 1;
	  print(x , y);
	}

	if(GetAsyncKeyState(VK_DOWN)) // FOR MOVING DOWNWARDS
	{
		erase(x, y);
		y += 1;
	 print(x , y);
	}
	if(GetAsyncKeyState(VK_ESCAPE))
	{
		gamerunning= false;
	}
	Sleep(100); // INDICATE THE SPEED OF PACMAN

	}
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
	cout<<"||.....................................................    |%|    |%|..........  ||\n";
	cout<<"###################################################################################\n";
}

void erase(int x , int y)     // for erasing the pacman
	{
		gotoxy(x , y);
		cout<<" ";
	}
	void print(int x , int y)  // for printing pacman
	{
		gotoxy(x , y);
		cout<<"P";
	   } 

