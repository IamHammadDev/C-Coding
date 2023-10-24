#include<iostream>
using namespace std;

int main(){
	string name;
	int roll_num;
	float agg;
	char section;
	cout<<"Enter your name: ";
	cin>> name;
	cout<<"Enter your roll number: ";
	cin>> roll_num;
	cout<<"Enter your total aggregate: ";
	cin>> agg;
	cout<<"Enter your section: ";
	cin>> section;
	cout<<"Hi, " << name <<", your roll number is " << roll_num << " and your section is " << section << " and your total aggregate is " << agg <<"%" << endl;
	return 0;
}
