##include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void maze();
void gotoxy(int x, int y);
int main()
{
	maze();
	gotoxy(4,4);
	cout<<" ";
	while(true)
	{
	int x, y;
	x += 1;
	cout<<"p";	
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
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
