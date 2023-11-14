#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
//	bubble sort
	int arr[10]={5,7,22,67,23,87,4,4,5,79};
	
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(arr[i]==arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1]=temp;
				cout<< temp;
			}
		}
	}
	
	cout<<"\nOriginal Array: "<< endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
