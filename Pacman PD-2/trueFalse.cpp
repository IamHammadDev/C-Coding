#include<iostream>
#include<windows.h>
using namespace std;
void trueFalse(string input);
int main()
{
	string input;
	cout<<"Enter T or F whatever you want: ";
	cin>> input;
	trueFalse(input);
	return 0;
}
void trueFalse(string input){
	if(input == "T")
	{
		cout<<"False";
	}else{
		cout<<"True";
	}
}
