#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//File Handling
	//o=writing data into file i=reading data from file
	ofstream newFile;
	newFile.open("F:\\UET LAHORE\\Programing Fundamental-Lab\\File_Handling\\sample.txt");
	newFile<<"This is my first file created using File Handling in c++";
	//Error Handling
	if(newFile.is_open()){
	cout<<"OMG!, My first file has been created successfully!";
	}else{
		cout<<"Error while creating a file!";
	}
	newFile.close();
	return 0;
}
