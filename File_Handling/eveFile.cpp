#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//File Handling
	//o=writing data into file i=reading data from file
	ofstream newFileEve;
	newFileEve.open("F:\\UET LAHORE\\Programing Fundamental-Lab\\File_Handling\\even.txt");
//	newFileOdd<<"This is my first file created using File Handling in c++";
	//Error Handling
	if(!newFileEve){
		cout<<"Error while creating a file!";
	}else{
		for(int i=0; i<30; i += 2){
			newFileEve<< i << " ";
		}
		newFileEve.close();
		cout<<"Even number are printed on the file!";
	}
	
	
	return 0;
}
