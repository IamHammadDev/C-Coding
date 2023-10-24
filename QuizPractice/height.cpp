#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int base = 43;
	int angleDeg = 30;
	float angleRad, height;
	angleRad = angleDeg * (M_PI/180);
	height = tan(angleRad) * base;
	cout<<"total Height of tree is: " << height << endl;
	return 0;
}
