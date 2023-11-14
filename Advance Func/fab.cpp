#include<iostream>
#include<math.h>
using namespace std;
void fab(int n){
	int t1=0, t2=1, nextTerm;
	for(int i=1; i<=n;i++){
		cout<<"Fabiniccio series: " << t1 << endl;
		nextTerm = t1+t2;
		t1=t2;
		t2 = nextTerm;
	}
}
int main(){
	int n;
	cout<<"Enter the range: ";
	cin>> n;
	fab(n);
	return 0;
}
