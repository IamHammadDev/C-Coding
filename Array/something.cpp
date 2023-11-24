//#include <iostream>
//using namespace std;
//
//string joinWithSpace(string a) {
//    return "something " + a;
//}
//int main() {
//	string a;
//	cout<<"Enter any text like (is better than nothing): ";
//	cin>> a;
//	string text = joinWithSpace(a);
//	cout<< text<< endl;
//    return 0;
//}

#include <iostream>
using namespace std;

string joinWithSpace(string a[]) {
    return "something " + a[0];
}

int main() {
    int size;
    cout<<"Enter the string size: ";
    cin>> size;
    string a[size];

    cout << "Enter any text like (is better than nothing): ";
    // Assuming you want to input a single string
    cin >> a[0]; 

    string text = joinWithSpace(a);
    cout << text << endl;

    return 0;
}

