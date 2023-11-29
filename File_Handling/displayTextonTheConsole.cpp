#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//File Handling
	//o=writing data into file i=reading data from file
	ifstream newFileOut;
	newFileOut.open("F:\\UET LAHORE\\Programing Fundamental-Lab\\File_Handling\\sample.txt");
	string line;
	while(getline(newFileOut, line)){
		cout<<line;
	}
	newFileOut.close();
	return 0;
}
