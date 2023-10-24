#include <iostream>

int main() {
    int number;
    
    // Read the number from the user
    std::cout << "Enter a number in the range [1 ... 99]: ";
    std::cin >> number;
    
    if (number < 1 || number > 99) {
        std::cout << "Number out of range. Please enter a number between 1 and 99." << std::endl;
        return 1;
    }
    
    if (number >= 11 && number <= 19) {
        switch (number) {
            case 11: std::cout << "eleven"; break;
            case 12: std::cout << "twelve"; break;
            case 13: std::cout << "thirteen"; break;
            case 14: std::cout << "fourteen"; break;
            case 15: std::cout << "fifteen"; break;
            case 16: std::cout << "sixteen"; break;
            case 17: std::cout << "seventeen"; break;
            case 18: std::cout << "eighteen"; break;
            case 19: std::cout << "nineteen"; break;
        }
    } else {
        int tensDigit = number / 10;
        int onesDigit = number % 10;
        
        switch (tensDigit) {
            case 2: std::cout << "twenty"; break;
            case 3: std::cout << "thirty"; break;
            case 4: std::cout << "forty"; break;
            case 5: std::cout << "fifty"; break;
            case 6: std::cout << "sixty"; break;
            case 7: std::cout << "seventy"; break;
            case 8: std::cout << "eighty"; break;
            case 9: std::cout << "ninety"; break;
        }
        
        if (onesDigit > 0) {
    std::cout << " ";
    if (onesDigit == 1) {
        std::cout << "one";
    } else if (onesDigit == 2) {
        std::cout << "two";
    } else if (onesDigit == 3) {
        std::cout << "three";
    } else if (onesDigit == 4) {
        std::cout << "four";
    } else if (onesDigit == 5) {
        std::cout << "five";
    } else if (onesDigit == 6) {
        std::cout << "six";
    } else if (onesDigit == 7) {
        std::cout << "seven";
    } else if (onesDigit == 8) {
        std::cout << "eight";
    } else {
        std::cout << "nine";
    }
}

    }
    
    std::cout << std::endl;
    
    return 0;
}







//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main(){
//	int num, r ,s=0;
//    cout<<"Enter the number to check its reverse: ";
//    cin>> num;
//    while(num>0){
//    	r = num%10;
//    	s = s*10+r;
//    	num /= 10;
//	}
//	while(s>0){
//		r = s%10;
//		switch(r){
//			case 0: cout<<"Zero";break;
//			case 1: cout<<"One";break;
//			case 2: cout<<"Two";break;
//			case 3: cout<<"Three";break;
//			case 4: cout<<"Four";break;
//			case 5: cout<<"Five";break;
//			case 6: cout<<"six";break;
//			case 7: cout<<"seven";break;
//			case 8: cout<<"Eight";break;
//			case 9: cout<<"Nine";break;
//		}
//		s /= 10;
//	}
//	return 0;
//}
