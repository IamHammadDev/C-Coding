#include<iostream>
using namespace std;
string youngerBro(int age1, int age2, int age3, string name1, string name2, string name3){
	if((age1 > age2) && (age1 > age3)){
		return name1;
	}else if((age2 > age1) && (age2 > age3)){
		return name2;
	}else{
		return name3;
	}
}
int main(){
	int age1, age2, age3;
	string name1, name2, name3;
	cout<<"Enter 1st bro name and age: ";
	cin>> name1;
	cin>> age1;
	cout<<"Enter 2nd bro name and age: ";
	cin>> name2;
	cin>> age2;
	cout<<"Enter 3rd bro name and age: ";
	cin>> name3;
	cin>> age3;
	string badaBhai = youngerBro(age1, age2, age3, name1, name2, name3);
	cout<<"Youger Brother is: " << badaBhai << endl;
	return 0;
}
