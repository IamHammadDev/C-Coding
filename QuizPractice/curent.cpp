#include<iostream>
using namespace std;

int main(){
	int ch, ti;
	float current;
	cout<<"Enter the charge: ";
	cin>> ch;
	cout<<"Enter the time: ";
	cin>> ti;
	current = ch / ti;
	cout<<"The total current: " << current << endl;
	return 0;
}
