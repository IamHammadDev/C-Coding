#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//File Handling
	//o=writing data into file i=reading data from file
	ofstream newFile;
	newFile.open("F:\\UET LAHORE\\Programing Fundamental-Lab\\File_Handling\\sample3.txt");
	if(newFile.is_open()){
	newFile<<"This is my first file created using File Handling in c++"<<endl;
	newFile<<"kjhgriogeriojgeruiogwirjgwioerjfgiowerjfoi "<<endl;
	newFile.close();
	cout<<"OMG!, My first file has been created successfully!"<<endl;
	}else{
		cout<<"Error while creating a file!";
	}
	return 0;
}
