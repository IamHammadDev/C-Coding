#include<iostream>
using namespace std;

int main(){
	//pointers stores the address of other varriables
	//pointer array are constant integers whose value does not be changeable
	int arr[] = {10, 20, 30, 40, 50};
	//return the address of the first element of the array
	cout<<"Array address: " << arr << endl;
	//value of the 1st elem
	cout<<"Array Value: " << *arr << endl;
	//declaring array ptr
	int *ptr = arr;
	//it will increment the value by addressing 4 bytes in the array to access the next elem unitll loop breaks
	for(int i=0; i<5; i++){
		cout<<"Array Values with pointer: " << *ptr << ", and Address of the values: " << ptr <<endl;
		ptr++;
		//indexing pointer increment
//		cout<<*(arr+i)<<endl;
//		arr++;//illega;
	}
	
	return 0;
}
