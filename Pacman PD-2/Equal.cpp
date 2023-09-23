#include<iostream>
#include<windows.h>
using namespace std;
void equal(int x, int y);
int main()
{
	int x, y;
	cout<<"Enter the value of x: ";
	cin>> x;
	cout<<"Enter the value of y: ";
	cin>> y;
	equal(x, y);
	return 0;
}
void equal(int x, int y){
	if(x == y)
	{
		cout<<"True! You have entered the correct values: (" << x << ", " << y << ")" <<endl;
	}else{
		cout<<"False! You have not entered the correct values: (" << x << ", " << y << ")" <<endl;
	}
}
