#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//File Handling
	//o=writing data into file i=reading data from file
	ofstream newFileOdd;
	newFileOdd.open("F:\\UET LAHORE\\Programing Fundamental-Lab\\File_Handling\\odd.txt");
//	newFileOdd<<"This is my first file created using File Handling in c++";
	//Error Handling
	if(!newFileOdd){
		cout<<"Error while creating a file!";
	}else{
		for(int i=1; i<30; i += 2){
			newFileOdd<< i << " ";
		}
		newFileOdd.close();
		cout<<"Odd number are printed on the file!";
	}
	
	
	return 0;
}
