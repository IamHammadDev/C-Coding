#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter a name: ";
    cin >> name;
    char lastChar = name[name.length() - 1];
    bool temp = false;
    if (lastChar == 'n') {
    	temp = true;
        cout << "Last character: " << lastChar << " true " << temp << endl;
    } else {
    	temp = false;
        cout << "Last character: " << lastChar << " false " << temp << endl;
    }

    return 0;
}

