#include<iostream>
using namespace std;
int i,j;
//Rectangle
void rectangle(int row){
	for(i=1; i<=row; i++){
		for(j=1; j<=row;j++){
			cout<<"$ ";
		}
		cout<<endl;
	}
}
//Increasing Triangle
void incTriangle(int row){
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			cout<<"% ";
		}
		cout<<endl;
	}
}
//Decreasing Triangle
void decTriangle(int row){
	for(i=1;i<=row;i++){
		for(j=i;j<=row;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
//dec space and inc triangle
void decspaceIncTri(int row){
	for(i=1;i<=row;i++){
		for(j=i;j<=row;j++){
			cout<<"  ";
		}
		for(j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
//inc space and dec triangle
void IncspaceDecTri(int row){
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			cout<<"  ";
		}
		for(j=i;j<=row;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
//hill pattern
void hill(int row){
	for(i=1;i<=row;i++){
		for(j=i;j<=row;j++){
			cout<<"  ";
		}
		for(j=1;j<=i;j++){
			cout<<"* ";
		}
		for(j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
void RevHill(int row){
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			cout<<"  ";
		}
		for(j=i;j<=row;j++){
			cout<<"* ";
		}
		for(j=i;j<=row;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main(){
	int row;
	cout<<"Enter the number of rows: ";
	cin>> row;
	rectangle(row);
	cout<<endl;
	incTriangle(row);
	cout<<endl;
	decTriangle(row);
	cout<<endl;
	decspaceIncTri(row);
	cout<<endl;
	IncspaceDecTri(row);
	cout<<endl;
	hill(row);
	cout<<endl;
	RevHill(row);
	return 0;
}
