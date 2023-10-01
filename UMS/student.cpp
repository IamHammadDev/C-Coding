#include <iostream>
#include <string>

struct Student {
    std::string name;
    double matricMarks;
    double interMarks;
    double ecatMarks;
    double aggregate;
};

int main() {
    Student student1, student2;
    int option;

    while (true) {
        std::cout << "Menu:\n";
        std::cout << "1. Enter data for the first student\n";
        std::cout << "2. Enter data for the second student\n";
        std::cout << "3. Calculate aggregate for the first student\n";
        std::cout << "4. Calculate aggregate for the second student\n";
        std::cout << "5. Determine the student with the higher aggregate for roll number 1\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your option: ";
        std::cin >> option;

        switch (option) {
            case 1:
                std::cout << "Enter name of the first student: ";
                std::cin >> student1.name;
                std::cout << "Enter matric marks (out of 11000) for the first student: ";
                std::cin >> student1.matricMarks;
                std::cout << "Enter inter marks (out of 510) for the first student: ";
                std::cin >> student1.interMarks;
                std::cout << "Enter Ecat marks (out of 400) for the first student: ";
                std::cin >> student1.ecatMarks;
                break;

            case 2:
                std::cout << "Enter name of the second student: ";
                std::cin >> student2.name;
                std::cout << "Enter matric marks (out of 11000) for the second student: ";
                std::cin >> student2.matricMarks;
                std::cout << "Enter inter marks (out of 510) for the second student: ";
                std::cin >> student2.interMarks;
                std::cout << "Enter Ecat marks (out of 400) for the second student: ";
                std::cin >> student2.ecatMarks;
                break;

            case 3:
                student1.aggregate = (0.25 * student1.matricMarks / 11000.0) +
                                    (0.45 * student1.interMarks / 510.0) +
                                    (0.30 * student1.ecatMarks / 400.0);
                std::cout << "Aggregate for the first student: " << student1.aggregate << "\n";
                break;

            case 4:
                student2.aggregate = (0.25 * student2.matricMarks / 11000.0) +
                                    (0.45 * student2.interMarks / 510.0) +
                                    (0.30 * student2.ecatMarks / 400.0);
                std::cout << "Aggregate for the second student: " << student2.aggregate << "\n";
                break;

            case 5:
                if (student1.aggregate > student2.aggregate) {
                    std::cout << "Student 1 (" << student1.name << ") has a higher aggregate for roll number 1.\n";
                } else if (student2.aggregate > student1.aggregate) {
                    std::cout << "Student 2 (" << student2.name << ") has a higher aggregate for roll number 1.\n";
                } else {
                    std::cout << "Both students have the same aggregate for roll number 1.\n";
                }
                break;

            case 6:
                std::cout << "Exiting the program.\n";
                return 0;

            default:
                std::cout << "Invalid option. Please enter a valid option.\n";
        }
    }

    return 0;
}

