#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int x , int y );

main()
{
	maze();
	// for horizontal movement
	int x= 3;
	int y= 20;
	while(true)
	{
	
	gotoxy( x , y );
	cout<<" ";
	x+= 1;
	//if(x==55)
	//{
	//x= 3;
	if(x==55)
	{
	
	for(int x=55;y>=1;y=y-1)
	{gotoxy( x , y );
	cout<<" ";
	if(y==2)
	{
		y=20;
	}
	gotoxy(x , y);
	
	cout<<"p";
	Sleep(100);
	}
}
	// }
	 
	gotoxy( x , y );
	cout<<"p";
	Sleep(100);
}

}
	
	
	

void gotoxy(int x , int y )
{COORD coordinates;
coordinates.X= x;
coordinates.Y= y;


SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void maze()
{ 
system("color 20");
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
