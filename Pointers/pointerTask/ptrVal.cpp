#include<iostream>
using namespace std;

int main(){
	string name = "Food";
	string* ptr = &name;
	//printing address
	cout<<"The value of the pointer: " << ptr << endl;
	//printing value
	cout<<"Value it points to (pointter): " << *ptr << endl; 
	return 0;
}
