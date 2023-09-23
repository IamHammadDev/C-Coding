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
	x = 2;
	y = 4;
	cout<<" ";
	while(true)
	{
		gotoxy(x, y);
		cout<<" ";
		x += 1;
		if(x == 20){
			x = 2;
		}
		gotoxy(x,y);
		cout<<"P";
		Sleep(300);
	}
	return 0;
}
// MAZE FUNCTION
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
