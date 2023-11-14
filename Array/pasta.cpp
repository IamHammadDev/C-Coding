/*write a c++ program that helps the pasta make to keep track of sales for five different types of pastas: 
Mild, medium, Hot, zesty, sweet
the program should use two parralel 5 elements arrays
an array of string that hold the five pastas type
an integer array that hold the record of last month solded pasta array for each type of pasta
the pastas name should be stored using an initialization list at the time the name array created.
the program should ask the user to enter the number solded pastas for each type.
the program should produce the report that displays
1. sales for each pastas type
2. total sales
3. the name of the highest selling product
4. the name of the lowest selling product*/
#include<iostream>
using namespace std;

int main(){
	string arrPastaType[5] = {"Mild", "Medium", "Hot", "Zesty", "Sweet"};
	int soldedPasta[5];
//	taking the solded pasta numbers during last month
	for(int i=0; i<5; i++){
		cout<<"Enter the number of: " << arrPastaType[i] << " pasta solded last month: ";
		cin>> soldedPasta[i];
	}
//	the program should ask the user to enter the number solded pastas for each type
	cout << "\nSales for each pasta type:" << endl;
	int totalsale = 0;
	int highsold = soldedPasta[0];
	int lowsold = soldedPasta[0];
	string highestSellingProduct = arrPastaType[0];
    string lowestSellingProduct = arrPastaType[0];
    for(int i=0;i<5;i++){
    	cout<< arrPastaType[i] << ": " << soldedPasta[i] << " pcs" << endl;
    	totalsale += soldedPasta[i];
    	if (soldedPasta[i] > highsold) {
            highsold = soldedPasta[i];
            highestSellingProduct = arrPastaType[i];
        }
        if (soldedPasta[i] < lowsold) {
            lowsold = soldedPasta[i];
            lowestSellingProduct = arrPastaType[i];
        }
    }

    cout << "Total sales: " << totalsale << " pcs" << endl;
    cout << "Highest selling product: " << highestSellingProduct << " (" << highsold << " pcs)" << endl;
    cout << "Lowest selling product: " << lowestSellingProduct << " (" << lowsold << " pcs)" << endl;
	return 0;
}
