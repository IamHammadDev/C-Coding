#include<iostream>
using namespace std;
int main()
{
	float weightinLb, weightinKg;
	cout<<"Enter Your weight in Pounds: ";
	cin>>weightinLb;
	weightinKg = weightinLb*0.45;
	cout<<"Your total weight in KGs: "<< weightinKg <<" kg"<<endl;
	return 0;
}
