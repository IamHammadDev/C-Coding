#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
int main()
{
	gotoxy(7, 15);
	cout<<"Hammad";
	return 0;
}
// COORD FUNCTION
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
