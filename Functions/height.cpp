#include <iostream>
#include <cmath>
using namespace std;
int main() {
	 // Conversion factor from degrees to radians
	 double degToRadian = 57.2958;
	 // Distance from the base of the tree (in feet)
	 double distanceBase = 43;
	  // Angle of elevation (in degrees)
	double angleDeg = 30;
	// Convert the angle to radians
	double angleRadian = angleDeg / degToRadian;
	// Calculate the height of the tree using the tangent function
	double height = distanceBase * tan(angleRadian);
	// Output the result
    cout << "The height of the tree is: " << height << " feet" << endl;
    return 0;
}
