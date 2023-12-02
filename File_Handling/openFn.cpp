#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	//creating new file
	//writing
//	ofstream fileOut("F:\\UET LAHORE\\Programing Fundamental-Lab\\new.txt");
//	string bio;
//	cout<<"Enter your bio: ";
//	getline(cin, bio);
//	fileOut<<bio;
//	fileOut.close();
//	//reading
//	ifstream fileIn("F:\\UET LAHORE\\Programing Fundamental-Lab\\new.txt");
//	string fileContent;
//	getline(fileIn, fileContent);
//	cout<<"The content of the file: " << fileContent;
//	fileIn.close();

//	OPEN & EOF operation in c++
	//write
	ofstream newOut;
	newOut.open("F:\\UET LAHORE\\Programing Fundamental-Lab\\File_Handling\\newFile.txt");
	string st1;
	cout<<"Enter the content: ";
	getline(cin, st1);
	newOut<<st1;
	//error handling
	if(!newOut){
		cout<<"Error while opening a file";
	}
	newOut.close();
	//reading
	ifstream newIn;
	newIn.open("F:\\UET LAHORE\\Programing Fundamental-Lab\\File_Handling\\newFile.txt");
	string st;
	//eof() = end of line function
	while(newIn.eof() == 0){
		getline(newIn, st);
		cout<<"The content of the file: " << st << endl;	
	}
	newIn.close();
	return 0;
}
