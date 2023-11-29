#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//File Handling
	//o=writing data into file i=reading data from file
	ofstream newFileOut;
	string line;
	newFileOut.open("F:\\UET LAHORE\\Programing Fundamental-Lab\\File_Handling\\sample.txt");
	if(!newFileOut){
		cout<<"Error while opening a file!";
	}
	cout<<"Enter your text here: ";
	while(true){
		getline(cin, line);
			break;
		newFileOut<<line;
	}
	newFileOut.close();
	return 0;
}
