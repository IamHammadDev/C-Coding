#include <iostream>
#include<math.h>
using namespace std;

int main() {
	string movie[5] = {"Gladiator", "starWar", "Terminator", "TakingLives", "TombRider"};
	string uM;
	int price = 500;
	cout<<"Enter your movie name: ";
	cin>> uM;
	for(int i=0; i<5; i++){
		if((movie[i]==uM) && (i%2==0)){
			float discountedPrice = price - (price * 0.05);
            cout << "The price for " << uM << " is: $" << discountedPrice << endl;
            break;
		}else{
			float discountedPrice = price - (price * 0.1);
            cout << "The price for " << uM << " is: $" << discountedPrice << endl;
            break;
		}
	}
    return 0;
}

