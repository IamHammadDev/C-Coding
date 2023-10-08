#include<iostream>
using namespace std;
string tempHum(string temp, string humid){
	if((temp == "warm")&&(humid == "dry")){
		return "Play Tennis!";
	}else if((temp == "warm")&&(humid == "humid")){
		return "swim!";
	}else if((temp == "cold")&&(humid == "dry")){
		return "Play basketball!";
	}else if((temp == "cold")&&(humid == "humid")){
		return "Watch TV!";
	}else{
		return "Enter the valid temprature and humidity forms!";
	}
}
int main(){
	string temp, humid;
	cout<<"Enter the temprature in (warn or cold) form: ";
	cin>> temp;
	cout<<"Enter the Humidity in (dry or humid) form: ";
	cin>> humid;
	string game = tempHum(temp, humid);
	cout<<"Let's " << game << endl;
	return 0;
}
