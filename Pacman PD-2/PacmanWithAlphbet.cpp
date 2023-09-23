#include<iostream>
#include<windows.h>
void gotoxy(int x, int y);
using namespace std;
int main()
{
	gotoxy(4, 5);
	cout<<"\n### ##     ##     ## ##    ##   ##   ##     ###   ##\n";
	cout<<" ##  ##     ##   ##   ##    ## ##     ##       ##  ##\n";
	cout<<" ##   ##  ## ##  ##        # ### #  ## ##    #  ##  #\n";
	cout<<" ##   ##  ##  ## ##        ## # ##  ##  ##   ##  ##\n";
	cout<<" ##  ##   ## ### ##        ##   ##  ## ###   ##   ##\n";
	cout<<" ##       ##  ## ##   ##   ##   ##  ##  ##   ##   ##\n";
	cout<<"####     ###  ##  ## ##    ##   ## ### ##   ###   ##";
	return 0;
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
