#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double a, b, c;
	a = 5.0;
	b = 6.0;
	c = 1.0;
	float quadratic = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
	cout<<"value of x: " << quadratic << endl;
	return 0;
}
