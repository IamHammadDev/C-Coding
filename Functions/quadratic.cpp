#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // Coefficients of the quadratic equation
    double a, b, c;
	cout<<"Enter the value of a: ";
	cin>> a;
	cout<<"Enter the value of b: ";
	cin>> b;
	cout<<"Enter the value of c: ";
	cin>> c;
    // Calculate the discriminant (d = b^2 - 4ac)
    double discriminant = pow(b,2) - 4 * a * c;
    // Calculate the two solutions for x
    double x1 = (-b + sqrt(discriminant)) / (2 * a);
    double x2 = (-b - sqrt(discriminant)) / (2 * a);
    // Output the solutions
    cout << "Solutions: x1 = " << x1 << " and x2 = " << x2 << endl;
    return 0;
}
