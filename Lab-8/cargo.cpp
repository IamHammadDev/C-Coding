#include <iostream>
#include <iomanip>  // For setting the precision when printing percentages
using namespace std;

int main() {
    int cargo_count;
    cout<<"Enter the cargo: ";
    cin >> cargo_count;

    int total_weight = 0;
    int minibus_weight = 0;
    int truck_weight = 0;
    int train_weight = 0;

    for (int i = 0; i < cargo_count; ++i) {
        int weight;
        cin >> weight;
        total_weight += weight;

        if (weight <= 3) {
            minibus_weight += weight;
        } else if (weight <= 11) {
            truck_weight += weight;
        } else {
            train_weight += weight;
        }
    }

    double minibus_percentage = ((minibus_weight) / total_weight) * 100;
    double truck_percentage = ((truck_weight) / total_weight) * 100;
    double train_percentage = ((train_weight) / total_weight) * 100;

    double average_price_per_ton = (200.0 * minibus_weight + 175.0 * truck_weight + 120.0 * train_weight) / total_weight;

    // Output the results with the specified format
    cout << "Average price per ton of carried cargo:" << average_price_per_ton << endl;
    cout << "Percentage of the cargo by minibus: " << minibus_percentage << "%" << endl;
    cout << "Percentage of the cargo by truck: " << truck_percentage << "%" << endl;
    cout << "Percentage of the cargo by train: " << train_percentage << "%" << endl;

    return 0;
}

