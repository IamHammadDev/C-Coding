#include <iostream>
using namespace std;
int main() {
	float megaByte, bit;
	cout<<"Enter the size in MegaBytes(MB): ";
	cin>> megaByte;
	bit = megaByte * 1024 * 1024 * 8;
	cout<<"The size in bits is: " << bit << " bits" << endl;
    return 0;
}

