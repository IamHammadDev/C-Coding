#include <iostream>
using namespace std;
// Function prototype
string checkSpeed(float speed);
int main() {	
	float speed;
	cout<<"Enter the speed of the car: ";
	cin>> speed;
	// Function calling
	string check = checkSpeed(speed);
	cout<<"Your car's speed is: " << check << endl;
    return 0;
}

// Function definition
string checkSpeed(float speed){
	if(speed <= 10.0) {
        return "slow";
    } else if (speed <= 50.0) {
        return "average";
    } else if (speed <= 150.0) {
        return "fast";
    } else if (speed <= 1000.0) {
        return "ultra-fast";
    } else {
        return "extremely fast";
    }
}



