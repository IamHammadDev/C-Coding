#include<iostream>
using namespace std;

int main(){
	int weightinPound;
	float weightinKg;
	cout<<"Enter your weight in Pounds: ";
	cin>> weightinPound;
	weightinKg = weightinPound * 0.45;
	cout<<"Your total weight is " << weightinKg <<"kgs" << endl;
	return 0;
}
