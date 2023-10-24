#include <iostream>
using namespace std;
int main() {
    int kilobytesPerMegabyte = 1024;
    int bytesPerKilobyte = 1024;
    int bitsPerByte = 8;
    double megabytes;
    cout << "Enter the number of megabytes: ";
    cin >> megabytes;
    // Perform the conversions
    float bits = (megabytes * kilobytesPerMegabyte * bytesPerKilobyte * bitsPerByte);
   	cout << megabytes << " megabytes is equal to " << bits << " bits." << endl;

    return 0;
}

