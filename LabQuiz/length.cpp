#include<iostream>
using namespace std;

int main(){
	float length, width;
	//As length is 1.5 times the width then simply multiply with it
	cout<<"Enter the width of picture frame: ";
	cin>> width;
	length = 1.5 * width;
	cout<<"The length of picture frame is: " << length << ", and The width of picture frame is: " << width << endl;
	
	return 0;
}
