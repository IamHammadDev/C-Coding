#include<iostream>
using namespace std;
#include<windows.h>
void maze();
void gotoxy(int x , int y);
void erase(int x , int y);
void print(int x , int y);
char GetCharAtxy(short int x , short int y);
// MAIN FUNCTION
main()
{
	maze();
	int x= 3;
	int y= 20;
	gotoxy(x , y);
	cout<<"P";
	bool gamerunning= true;
// LOOP STARTING
	while(gamerunning)
	{
	if(GetAsyncKeyState(VK_LEFT)) // FOR LEFTWARDS MOVEMENT
	
	{   char nextLocation = GetCharAtxy(x-1 , y);
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
	     
	void gotoxy(int x , int y ) // FOR DTERMINING COORDINATES
{COORD coordinates;
coordinates.X= x;
coordinates.Y= y;


SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

    char GetCharAtxy(short int x , short int y)    // to read specific characters on screen
    {
    	CHAR_INFO ci;
    	COORD xy={ 3 ,20};
    	SMALL_RECT rect= { x, y , x , y};
    	COORD coordBufSize;
    	coordBufSize.X = 1;
    	coordBufSize.Y = 1;
    	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE) , &ci , coordBufSize , xy , &rect) ? ci.Char.AsciiChar  : '  ';
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
