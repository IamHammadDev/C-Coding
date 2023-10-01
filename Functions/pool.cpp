#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int V, P1, P2;
    float H;

    // Input data
    cout << "Enter the volume of the pool (liters): ";
    cin >> V;
    cout << "Enter the flow rate of the first pipe per hour (liters/hour): ";
    cin >> P1;
    cout << "Enter the flow rate of the second pipe per hour (liters/hour): ";
    cin >> P2;
    cout << "Enter the hours the worker is absent: ";
    cin >> H;

    // Calculate the total amount of water added to the pool
    float totalWater = (P1 + P2) * H;

    // Calculate the percentage contributed by each pipe
    int percentPipe1 = (P1 * H * 100) / totalWater;
    int percentPipe2 = (P2 * H * 100) / totalWater;

    // Calculate the current pool level
    int currentLevel = (V + totalWater > 10000) ? 10000 : V + totalWater;

    // Output data
    cout << "The pool is " << currentLevel << "% full. Pipe 1: " << percentPipe1 << "%. Pipe 2: " << percentPipe2 << "%." << endl;

    // Check if the pool has overflown
    if (currentLevel == 10000) {
        float overflowAmount = V + totalWater - 10000;
        cout << fixed << setprecision(2);
        cout << "For " << H << " hours, the pool overflows with " << overflowAmount << " liters." << endl;
    }

    return 0;
}

