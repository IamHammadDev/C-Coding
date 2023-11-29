#include<iostream>
using namespace std;

int main(){
	//Transpose of a Matrix
	int tran[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	
	for(int i=0; i<3; i++){
		for(int j=i; j<3; j++){
			int tempVar = tran[i][j];
			tran[i][j] = tran[j][i];
			tran[j][i] = tempVar;
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<tran[i][j] << " ";
		}
		cout<<endl;
	}
	
	return 0;
}
