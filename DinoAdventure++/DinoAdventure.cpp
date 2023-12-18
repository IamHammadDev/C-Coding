/*
		**************************************
		*									 *	
		*DINO GAME in C++ Developed By HAMMAD*
		*									 *
		**************************************
*/
//Neccessary Header files
#include<iostream>
#include<conio.h> //for taking getch() or getche() function
#include<windows.h>
#include<time.h>//for generating random entities like hurdles etc
using namespace std;
//taking global variable for Dino Animation
int DinoY, speed = 40; 		//t = indicates Dino jumping Vertically mean DinoY
int gameOver = 0;
//gameOver = 0;
//for the Cursor position
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x , int y) // FOR DTERMINING COORDINATES
{
	COORD coordinates;
	coordinates.X= x;
	coordinates.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void setcursor(bool visible, DWORD size){
    if (size == 0) {
        size = 20; // default cursor size Changing to numbers from 1 to 20, decreases cursor width
    }
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, & lpCursor);
}
void init(){
	system("cls"); 
    gameOver = 0;
    gotoxy(3, 2);
	cout<<"SCORE : ";
    for (int i = 0; i < 79; i++){
    	gotoxy(1+i, 1); cout<<"ß";
    	gotoxy(1+i, 25); cout<<"ß";
	}
}
void Dino(int jump=0){
	static int DinoAnime = 1; // animation for Legs of Dino
	//I made the DinoAnime variable static to retain its value between function calls. 
	if(jump == 0){ 		//Dino on the Ground where t=0
		DinoY = 0; 			// t varibale shows the connection of Dino with ground = DinoY
	}else if(jump == 2){ //for landing Dino on the ground
		DinoY--;				//DinoY
	}else{
		DinoY++;
	}
//	for drawing Dino
//As Dinosaur will move VERTICALLY only y-axis should be changed
//x-axis = Dino will remain in same position, Y-axis Dino will move Up & Down
	gotoxy(2, 15 - DinoY);
	cout<<"                 ";
    gotoxy(2, 16 - DinoY);
	cout<<"         ÜÛßÛÛÛÛÜ";
    gotoxy(2, 17 - DinoY);
	cout<<"         ÛÛÛÛÛÛÛÛ";
    gotoxy(2, 18 - DinoY);
	cout<<"         ÛÛÛÛÛßßß";
    gotoxy(2, 19 - DinoY);
	cout<<" Û      ÜÛÛÛÛßßß ";
    gotoxy(2, 20 - DinoY);
	cout<<" ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ ";
    gotoxy(2, 21 - DinoY);
	cout<<" ßÛÛÛÛÛÛÛÛÛÛÛ  ß ";
    gotoxy(2, 22 - DinoY);
	cout<<"   ßÛÛÛÛÛÛÛß     ";
    gotoxy(2, 23 - DinoY);
    //if Dino up in the air or ready to land the position of legs will remain that
    if (jump == 1 || jump == 2) {
        cout<<"    ÛÛß ßÛ       ";
        gotoxy(2, 24 - DinoY);
        cout<<"    ÛÜ   ÛÜ      ";
    } 
    //for animation of Legs of Dino
    else if(DinoAnime == 1){
    	//right leg about to in the air and left about to land
    	cout<<"    ßÛÛß  ßßß    ";
        gotoxy(2, 24 - DinoY);
        cout<<"      ÛÜ         ";
        DinoAnime = 2;
	}
	//Left leg about to in the air and right about to land
	else if(DinoAnime == 2){
		cout<<"     ßÛÜ ßÛ      ";
        gotoxy(2, 24 - DinoY);
        cout<<"          ÛÜ     ";
        DinoAnime = 1;
	}
	gotoxy(2, 25 - DinoY);
	if(jump != 0){//when jump then land will be vanished and else land will be vissible
		cout<<"                ";
	}else{
		cout<<"ßßßßßßßßßßßßßßßßß";
	}
	Sleep(speed);
}

//function for HURDLE POsITIONING
void Object(){
 	//HurdPo = for hurdle position 
	static int HurdPo = 0;
    static int score = 0;
    if (HurdPo == 56 && DinoY < 4) {
        score = 0;
        speed = 40;
        gotoxy(36, 8);cout<<"Game Over!";
        getch();
        gameOver = 1;
//        return 0;
    }
	//Hurdle Draw
	gotoxy(74 - HurdPo, 19);
	cout<<"| | ";
	gotoxy(74 - HurdPo, 20);
	cout<<"| | ";
    gotoxy(74 - HurdPo, 21);
	cout<<"| | ";
    gotoxy(74 - HurdPo, 22);
	cout<<"|_| ";
    gotoxy(74 - HurdPo, 23);
	cout<<" |  ";
    gotoxy(74 - HurdPo, 24);
	cout<<" |  ";
    HurdPo++;
    //if Hurdle Position above 73 then increase score
    if (HurdPo == 73) {
        HurdPo = 0;
        score++;
        gotoxy(70, 2);
        cout << "     ";
        gotoxy(70, 2);
        cout << score;
	//for increasing speed for every hurdle
        if (speed > 20)
            speed--;
    }
	
}

//Function for Play
void Play(){
	init();
	
	char ch;
	int i;
	while(true){
		
		while(!kbhit()){ //kbhit() = defines whether a key on the keyboard hits or not!
			Dino();
			Object();
			if (gameOver) {
                gotoxy(36, 8);
                cout << "Game Over!";
                getch();
                return;
            }
		}
		ch = getch();  // Non-standard function for console input without echoing characters
		if(ch == ' '){
			//for upper jump
			for(i=0; i<10; i++){
				Dino(1);
				Object();
				if (gameOver)
                    return;
			}
			
			//for Lower jump
			for(i=0; i<10; i++){
				Dino(2);
				Object();
				if (gameOver)
                    return;
			}
		}else if(ch == 'P' || ch == 'p'){ //for pressing X, x the game ends
			getch();
		}
		else if (ch == 27){
           break;
		   }
	}
}

void instructions() {
	system("cls");
	cout<<"Instructions";
	cout<<"\n----------------";
	cout<<"\n1. Avoid hurdles by jumping";
	cout<<"\n2. Press 'Spacebar' to jump ";
	cout<<"\n3. Press 'p' to pause game ";
	cout<<"\n4. Press 'Escape' to exit from game";
	cout<<"\n\nPress any key to go back to menu";
	getch();
}

int main(){
	system("mode con: lines=40 cols=98");  //for assigning our own specific height and width to cmd
	setcursor(0, 0);
	bool gameRunning = true;
	while(gameRunning){
		system("cls");
		gotoxy(10,5); 
		cout<<" <<<<<<<<<<<<<<---------------------------------->>>>>>>>>>>>>>> "; 
		gotoxy(10,6); 
		cout<<" |-------------        DINO ADVENTURE++          --------------| ";  
		gotoxy(10,7);
		 cout<<" <<<<<<<<<<<<<<---------------------------------->>>>>>>>>>>>>>> ";
		gotoxy(10,9);
		 cout<<"1. Start Game";
		gotoxy(10,10);
		 cout<<"2. Instructions";	 
		gotoxy(10,11);
		 cout<<"3. Quit";
		gotoxy(10,13);
		 cout<<"Select option: ";
		char op = getche();
		if(op == '1'){
			Play();
		}
		else if(op == '2'){
			instructions();
		}
		else if(op == '3'){
			exit(0);
		}
	}
	return 0;
}
