#include<iostream>
#include<math.h>
using namespace std;
void checkAlpha(char alphabet){
	if(isupper(alphabet)){
		cout<<"You have entered the alphabet in Capital Case: " << alphabet << endl;
	}else if(islower(alphabet)){
		cout<<"You have entered the alphabet in small Case: " << alphabet << endl;
	}
	else{
		cout<<"You have not entered the alphabet: " << alphabet << endl;
	}
}
int main(){
	char alphabet;
	cout<<"Enter the alphabet: ";
	cin>> alphabet;
	checkAlpha(alphabet);
	return 0;
}
