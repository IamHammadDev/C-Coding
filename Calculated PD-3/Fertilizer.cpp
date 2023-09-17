#include <iostream>
using namespace std;

int main() {
	int sizeOfFertilizerPounds, costOfBag, costFertilizerPerPound, costAreaPersquareFeat;
	float area;
	cout<<"Enter the size of fertilizer bag in pounds: ";
	cin>> sizeOfFertilizerPounds;
	cout<<endl;
	cout<<"Enter the cost of the bag: ";
	cin>> costOfBag;
	cout<<endl;
	cout<<"Enter the Area: ";
	cin>> area;
	cout<<endl;
	costFertilizerPerPound = costOfBag / sizeOfFertilizerPounds;
	costAreaPersquareFeat = costOfBag / area;
	cout<<"\nCost of Fertilizer per Pound: $ " << costFertilizerPerPound << endl;
	cout<<"Cost of Fertilizing per Square Foot: $ " << costAreaPersquareFeat << endl;
    return 0;
}

