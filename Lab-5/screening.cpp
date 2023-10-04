#include <iostream>
using namespace std;
// Function prototype
float totalIncome(string screeningType, int numRows, int numCols);
int main() {	
	string screeningType;
	int numRows, numCols;
	cout << "Enter the type of screening (P for Premiere / N for Normal / D for Discount): ";
    cin >> screeningType;
    cout << "Enter the number of rows in the hall: ";
    cin >> numRows;
    cout << "Enter the number of columns in the hall: ";
    cin >> numCols;
    float income = totalIncome(screeningType, numRows, numCols);
    cout<<"Your total Income: " << income << endl;
    return 0;
}

// Function definition
float totalIncome(string screeningType, int numRows, int numCols)
{
	float ticketPrice;
	if(screeningType == "P"){
		ticketPrice = 12.00; 
	} else if (screeningType == "N") {
        ticketPrice = 7.50;
    } else if (screeningType == "D") {
        ticketPrice = 5.00;
    } else {
        cout << "Invalid screening type." << endl;
        return 0;
    }
     float total = ticketPrice * (numRows * numCols);
     return total;
}

