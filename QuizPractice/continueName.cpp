#include <iostream>
using namespace std;
void printName(string name){
	cout<<"Your name is: " << name << endl;
}
int main() {
    string name;
    while(true){
    cout<<"Enter your name: ";
    cin>> name;
    if(name=="hammad"){
    	printName(name);
    	break;
		}else{
			cout<<"Name is not 'Irzam'. Please enter 'hammad' to continue." << endl;;
		}
	}
    return 0;
}

