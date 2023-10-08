#include <iostream>
using namespace std;

int main() {
    int h, x, y;

    // Input the value of h and the coordinates of the point
    cout<<"Enter the value of h, x, y: ";
    cin >> h >> x >> y;

    // Define the boundaries of the figure
    int minX = 0;
    int minY = 0;
    int maxX = 2 * h;
    int maxY = 4 * h;

    // Check if the point is inside, outside, or on the borders of the figure
    if (x > minX && x < maxX && y > minY && y < maxY) {
        if (x > h && x < 2 * h && y > h && y < 3 * h) {
            cout << "inside" << endl;
        } else {
            cout << "border" << endl;
        }
    } else {
        cout << "outside" << endl;
    }

    return 0;
}

