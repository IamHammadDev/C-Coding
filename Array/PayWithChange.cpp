#include <iostream>

using namespace std;

bool canPayWithChange(double change[], double totalDue) {
    // Convert change to total amount in dollars
    double totalChange = change[0] * 0.25 + change[1] * 0.10 + change[2] * 0.05 + change[3] * 0.01;

    // Check if the total change is greater than or equal to the total due
    if(totalChange >= totalDue){
    	cout<<"You should pay the Amount!" << endl;
	}else{
		cout<<"You should not pay the Amount!"<<endl;
	}
	return totalChange;
}

int main() {
    // Test Cases
    double change1[] = {2, 100, 0, 0};
    double totalDue1 = 14.11;
    
    cout<< "Result for Test Case 1: "  << boolalpha << canPayWithChange(change1, totalDue1) << endl;

    double change2[] = {0, 0, 20, 5};
    double totalDue2 = 0.75;
    cout << "Result for Test Case 2: " << boolalpha << canPayWithChange(change2, totalDue2) << endl;

    double change3[] = {30, 40, 20, 5};
    double totalDue3 = 12.55;
    cout << "Result for Test Case 3: " << boolalpha << canPayWithChange(change3, totalDue3) << endl;

    double change4[] = {10, 0, 0, 50};
    double totalDue4 = 3.85;
    cout << "Result for Test Case 4: " << boolalpha << canPayWithChange(change4, totalDue4) << endl;

    double change5[] = {1, 0, 5, 219};
    double totalDue5 = 19.99;
    cout << "Result for Test Case 5: " << boolalpha << canPayWithChange(change5, totalDue5) << endl;

    return 0;
}

