#include<iostream>
using namespace std;
string Log(string login, string password){
	if((login == " ") || (login != "Admin")){
		return "I don't know you sorry!";
	}else if((password == "TheMaster") && (login == "Admin")){
		return "Welcome!";
	}else if((password != "TheMaster")){
		return "Wrong Password!";
	}else{
		return "Cancelled!";
	}
}
int main(){
	string login;
	cout<<"Enter the Login status: ";
	cin>> login;
	string password;
	cout<<"Enter the password: ";
	cin>> password;
	string logstatus = Log(login, password);
	cout<<"You are: " << logstatus << endl;
	return 0;
}
