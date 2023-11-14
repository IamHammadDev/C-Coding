#include<iostream>
#include<math.h>
using namespace std;
int sum(int n){
	int ans=0;
	for(int i=1;i<=n;i++){
		ans += i;
	}
	return ans;
}
int main(){
	int n;
	cout<<"Enter the range: ";
	cin>> n;
	int re = sum(n);
	cout<<"The sum of n numbers are: " << re << endl;
	return 0;
}
