#include <iostream>
using namespace std;
int main() {
    string name;
    float matricMarks, intermediateMarks, ecatMarks;
	float aggregateScore;

    // Prompt the user for input
    cout << "Enter student's name: ";
    cin>> name;

    cout << "Enter matriculation marks (out of 1100): ";
    cin >> matricMarks;

    cout << "Enter intermediate marks (out of 550): ";
    cin >> intermediateMarks;

    cout << "Enter ECAT marks (out of 400): ";
    cin >> ecatMarks;

    // Calculate the aggregate score
    aggregateScore = (matricMarks / 1100) * 0.25 + (intermediateMarks / 510) * 0.45 + (ecatMarks / 400) * 0.30;
	cout<<"Your total aggregate: "<< aggregateScore * 100 << endl;
    // Check eligibility
    if (aggregateScore * 100 >= 69) {
        cout << "\nCongratulations, " << name << "! You are eligible for admission to UET." << endl;
    } else {
        cout << "\nSorry, " << name << ". You are not eligible for admission to UET." << endl;
    }

    return 0;
}

