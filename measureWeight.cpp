#include<iostream>
using namespace std;
int main()
{
	string name;
	int weight, days;
	cout<<"Enter your name: ";
	cin>> name;
	cout<<endl;
	cout<<"Enter weight that you want to loose: ";
	cin>> weight;
	cout<<endl;
	days = weight * 15;
	cout<< name <<", It will take " << days << " days to loose "<< weight << " KGs";
	return 0;
}
