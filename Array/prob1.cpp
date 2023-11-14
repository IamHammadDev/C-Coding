#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
// 		Problem 1
//	int myArray1[10] = {-1 ,1, 2, 3, 4, 5, 6, 7, 8, 9}; 
// 
//	for(int i = 1; i< 5; i= i+1){
// 		int k = i*2;
// 		cout<<myArray1[i]<<" "<< myArray1[k]<<" "<< myArray1[k+1]<<endl;
//	}
	
//	problem 2
	char myArray1[5] = {'h', 'l', 'o','o','l' }; 
 	char myArray2[5] = {'e', 'l', 'w', 'r', 'd'}; 
 	char myArray3[10]; 
 	for (int i = 0; i< 10; i= i+2){
 		//helloword required!
 		myArray3[i] = myArray1[i/2];
 		myArray3[i+1] = myArray2[i/2]; 
 	}
 	for (int i = 0; i< 10; i= i+1){
 		cout<<myArray3[i];
 	}
	return 0;
}
