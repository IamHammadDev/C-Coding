#include<iostream>
using namespace std;
int main()
{
	float vegePricePerKg, fruitPricePerKg, earningCoin, earningRp;
	int totalVegeKg, totalFruitKg;
	float rpToCoinRate = 1.49;
    // Vege & Fruit per KG price
	cout<<"Enter the Vege price per KG: ";
	cin>> vegePricePerKg;
	cout<<"Enter the Fruit price per KG: ";
	cin>> fruitPricePerKg;
	// Total vege & fruit kG
	cout<<"Enter total kilograms of vegetables: ";
	cin>> totalVegeKg;
	cout<<"Enter total kilograms of fruits: ";
	cin>> totalFruitKg;
	earningCoin = (vegePricePerKg * totalVegeKg) + (fruitPricePerKg * totalFruitKg);
	earningRp = earningCoin / rpToCoinRate;
	// Display the earnings in Rps
    cout << "Earnings in Rupees (Rps): " << earningRp << endl;
	return 0;
}

