#include<iostream>
using namespace std;
int main()
{
	string name;
	int book1, book2, book3, book4, book5, total;
	float percentage;
	cout<<"Enter Your name: ";
	cin>> name;
	cout<<endl;
	cout<<"Enter your book-1 marks out of 100: ";
	cin>> book1;
	cout<<endl;
	cout<<"Enter your book-2 marks out of 100: ";
	cin>> book2;
	cout<<endl;
	cout<<"Enter your book-3 marks out of 100: ";
	cin>> book3;
	cout<<endl;
	cout<<"Enter your book-4 marks out of 100: ";
	cin>> book4;
	cout<<endl;
	cout<<"Enter your book-5 marks out of 100: ";
	cin>> book5;
	cout<<endl;
	total = book1 + book2 + book3 + book4 + book5;
	percentage = (book1 + book2 + book3 + book4 + book5) / 5;
	cout<< name <<", Your total marks out of 500 are: "<< total << endl;
	cout<< name <<", Your percentage is: "<< percentage;
	return 0;
}
