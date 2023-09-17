#include <iostream>
using namespace std;

int main() {
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, add, mult, subt, finalResult;
	cout<<"Enter the Number 1: ";
	cin>> n1;
	cout<<"Enter the Number 2: ";
	cin>> n2;
	cout<<"Enter the Number 3: ";
	cin>> n3;
	cout<<"Enter the Number 4: ";
	cin>> n4;
	cout<<"Enter the Number 5: ";
	cin>> n5;
	cout<<"Enter the Number 6: ";
	cin>> n6;
	cout<<"Enter the Number 7: ";
	cin>> n7;
	cout<<"Enter the Number 8: ";
	cin>> n8;
	cout<<"Enter the Number 9: ";
	cin>> n9;
	cout<<"Enter the Number 10: ";
	cin>> n10;
	cout<<"Enter the Number 11: ";
	cin>> n11;
	cout<<"Enter the Number 12: ";
	cin>> n12;
	cout<<"Enter the Number 13: ";
	cin>> n13;
	cout<<"Enter the Number 14: ";
	cin>> n14;
	cout<<"Enter the Number 15: ";
	cin>> n15;
	// adding first 5 numbers
	add = n1 + n2 + n3 + n4 + n5;
	mult = n6 * n7 * n8 * n9 * n10;
	subt = n11 - n12 - n13 - n14 - n15;
	finalResult = (add  + mult) - subt;
	cout<<"Total Final Results: " << finalResult << endl;
    return 0;
}

