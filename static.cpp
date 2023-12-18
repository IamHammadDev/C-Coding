#include <iostream>

void exampleFunction() {
    // Static variable retains its value between function calls
    static int count = 0;
    count++;

    std::cout << "Call " << count << ": " << "Static variable value: " << count << std::endl;
}

int main() {
    exampleFunction();
    exampleFunction();
    exampleFunction();

    return 0;
}

