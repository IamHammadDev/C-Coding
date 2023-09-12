#include<iostream>
using namespace std;
int main()
{
	string name;
	int rollNum;
	char section;
	float aggregate;
	cout<<"Enter Your Name: ";
	cin>> name;
	cout<<endl;
	cout<<"Enter Your Roll Number: ";
	cin>> rollNum;
	cout<<endl;
	cout<<"Enter Your section: ";
	cin>> section;
	cout<<endl;
	cout<<"Enter Your aggregate: ";
	cin>> aggregate;
	cout<<endl;
	cout<<"User Information\n";
	cout<<"Your Name is: "<< name <<endl;
	cout<<"Your Roll Number is: "<< rollNum <<endl;
	cout<<"Your section is: "<< section <<endl;
	cout<<"Your total Aggregate is: " << aggregate <<endl;
	return 0;
}
