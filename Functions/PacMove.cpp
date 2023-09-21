#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void maze();
void gotoxy(int x, int y);
int main()
{
	
	maze();
	gotoxy(4,4);
	cout<<"m";
//	while(true)
//	{
//	int x, y;
//	x = 5;
//	cout<<"p";
//	break;	
//	}
	
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
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
