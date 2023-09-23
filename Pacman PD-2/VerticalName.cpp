#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void alphaH();
void alphaA();
void alphaM();
void alphaD();
int main()
{
	gotoxy(0, 0);
	alphaH();
	gotoxy(0, 1);
	alphaA();
	gotoxy(0, 2);
	alphaM();
	gotoxy(0, 3);
	alphaM();
	gotoxy(0, 4);
	alphaA();
	gotoxy(0, 5);
	alphaD();
	return 0;
}
// COORD FUNCTION
void alphaH()
{
	cout<<"H";
}
void alphaA()
{
	cout<<"A";
}
void alphaM()
{
	cout<<"M";
}
void alphaD()
{
	cout<<"D";
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
