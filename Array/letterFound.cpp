#include <iostream>
#include<math.h>
using namespace std;
bool check(string word, char letter){
	bool isFound = false;
	for(int i=0; word[i]!='\0'; i++){
		if(word[i]==letter){
			cout<< letter <<" " << i << endl;
			isFound = true;
		}
	}
	return isFound;
}
int main() {
	string word;
	char letter;
	cout<<"Enter the word: ";
	cin>> word;
	cout<<"Enter the letter to check whether it is exist in the array or not: ";
	cin>> letter;
	if(check(word, letter)){
		cout<<letter <<" is Found in the array!";
	}else{
		cout<<letter <<" is not found in the array!";
	}
    return 0;
}

