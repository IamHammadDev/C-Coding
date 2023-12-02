#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string str1 = "This is a file with which we will write the data";
	string str2;
//	Opening a file using constructor and writing it
	ofstream out("F:\\UET LAHORE\\Programing Fundamental-Lab\\readWrite.txt"); //Write operation
	cout<<"Enter anything here....: ";
	cin>> str2;
	getline(cin, str2);
	out<<str2;
	//	Opening a file using constructor and reading it
	ifstream in("F:\\UET LAHORE\\Programing Fundamental-Lab\\readWrite.txt"); //Read operation
	getline(in, str2);
	cout<<str2;
	
	string str3, content;
	cout<<"Enter the any content here: ";
	getline(cin, str3);
	//Write Operation
	ofstream fout("F:\\UET LAHORE\\Programing Fundamental-Lab\\readWrite.txt");
	fout<<str3;
//	
////	Read Operation
	ifstream fin("F:\\UET LAHORE\\Programing Fundamental-Lab\\readWrite.txt");
	getline(fin, content);
	cout<<content;

	//writing operation
	ofstream hout("F:\\UET LAHORE\\Programing Fundamental-Lab\\readWrite.txt");
	string str4;
	cout<<"Enter your Bio: ";
	getline(cin, str4);
	hout<<"Bio: " + str4;
	hout.close();
//	Read Operation
	ifstream hin("F:\\UET LAHORE\\Programing Fundamental-Lab\\readWrite.txt");
	string content;
	getline(hin, content);
	cout<<"The content of the file: " << content;
	hin.close();
	
	
	return 0;
}
