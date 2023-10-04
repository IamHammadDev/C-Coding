#include <iostream>
using namespace std;

int main()
{
	string n1, n2, n3;
	int a1, a2, a3;
	cout<<"Enter the Name of first Brother: ";
	cin>> n1;
	cout<<"Enter the Name of second Brother: ";
	cin>> n2;
	cout<<"Enter the Name of third Brother: ";
	cin>> n3;
	cout<<"Enter your age of first Brother: ";
	cin>> a1;
	cout<<"Enter your age of second Brother: ";
	cin>> a2;
	cout<<"Enter your age of third Brother: ";
	cin>> a3;
	if(a1 > a2){
		cout<<"Youger brother's name is: " << n1 << endl;
	}else if(a2 > a3){
		cout<<"Youger brother's name is: " << n2 << endl;
	}else{
		cout<<"Youger brother's name is: " << n3 << endl;
	}
	return 0;
}

