#include<iostream>
using namespace std;

int main(){
	//Pointer Arrays
	int mark[] = {28, 22, 24, 25, 11};
	int* ptr = mark;
	//first it will derefrence and the increament it
	cout<<*(ptr++)<<endl;
	cout<<*ptr<<endl;
	cout<<*(++ptr)<<endl;
	cout<<*(++ptr)<<endl;
	cout<<*(++ptr)<<endl;
//	cout<<"The value of mark[0]: " << *ptr << endl;
//	cout<<"The value of mark[1]: " << *(ptr+1) << endl;
//	cout<<"The value of mark[2]: " << *(ptr+2) << endl;
//	cout<<"The value of mark[3]: " << *(ptr+3) << endl;
	for(int i=0; i<5; i++){
		cout<<"The value of " << i << " " << *ptr << endl;
		ptr++;
	}
	return 0;
}
