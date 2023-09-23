#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void maze();
int main()
{
	int x, y;
	system("cls");
	maze();
	x = 4;
	y = 1;
	cout<<"      ";
	while(true)
	{
		gotoxy(x, y);
		cout<<"      ";
		y += 1;	
		if(y == 10)
		{
			y = 1;
		}
		gotoxy(x, y);
		cout<<"Pacman";
		Sleep(300);
	}
	
	return 0;
}
void maze()
{
	cout<<"#########################\n";
	cout<<"#                       #\n";
	cout<<"#                       #\n";
	cout<<"#                       #\n";
	cout<<"#                       #\n";
	cout<<"#                       #\n";
	cout<<"#                       #\n";
	cout<<"#                       #\n";
	cout<<"#                       #\n";
	cout<<"#                       #\n";
	cout<<"#########################";
}
// COORD FUNCTION
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
