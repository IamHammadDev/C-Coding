#include<iostream>
using namespace std;

int main(){
	//Palindrom chacking in Character array 
	//NITIN is a palindrome
	int n;
	cout<<"Enter the idx: ";
	cin>> n;
	char arr[n];
	cout<<"Enter the characters: ";
	cin>> arr;
	bool check = 1;
	for(int i=0; i<n; i++){
		if(arr[i] != arr[n-1-i]){
			check = 0;
			break;
		}
	}
	if(check){
		cout<<"The word is a palindrome!";
	}else{
		cout<<"The word is not a palindrome!";
	}
	return 0;
}
