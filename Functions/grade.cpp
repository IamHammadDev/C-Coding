#include <iostream>
using namespace std;

// Function to calculate the grade based on percentage
string calculateGrade(float percentage) {
    if (percentage >= 90) {
        return "A+";
    } else if (percentage >= 80) {
        return "A";
    } else if (percentage >= 70) {
        return "B+";
    } else if (percentage >= 60) {
        return "B";
    } else if (percentage >= 50) {
        return "C";
    } else if (percentage >= 40) {
        return "D";
    } else {
        return "F";
    }
}

int main() {
    string studentName;
    float englishMarks, mathsMarks, chemistryMarks, socialScienceMarks, cmpMarks;
    
    // Input student's name
    cout << "Enter student's name: ";
    cin>> studentName;
    
    // Input marks for five subjects
    cout << "Enter marks for five subjects (English, Maths, Chemistry, Social Science, Biology):\n";
    cout << "English: ";
    cin >> englishMarks;
    cout << "Maths: ";
    cin >> mathsMarks;
    cout << "Chemistry: ";
    cin >> chemistryMarks;
    cout << "Social Science: ";
    cin >> socialScienceMarks;
    cout << "Computer: ";
    cin >> cmpMarks;
    
    // Calculate total marks
    float totalMarks = englishMarks + mathsMarks + chemistryMarks + socialScienceMarks + cmpMarks;
    
    // Calculate percentage
    float percentage = (totalMarks / 500) * 100;
    
    // Calculate grade based on percentage
    string grade = calculateGrade(percentage);
    
    // Display the result
    cout << "\nStudent Name: " << studentName << endl;
    cout << "Total Marks: " << totalMarks << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
    
    return 0;
}

