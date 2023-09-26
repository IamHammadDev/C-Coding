#include <iostream>
#include <string>

// Function to print the main menu
void printMenu(const std::string& universityName) {
    std::cout << "Welcome to " << universityName << " Admission Management System" << std::endl;
    std::cout << "1. Calculate Aggregate" << std::endl;
    std::cout << "2. Compare Ecat Marks" << std::endl;
    std::cout << "3. Quit" << std::endl;
    std::cout << "Enter your choice: ";
}

// Function to calculate the aggregate
void calculateAggregate(const std::string& name, double matricMarks, double interMarks, double ecatMarks) {
    const double matricWeight = 0.30;
    const double interWeight = 0.30;
    const double ecatWeight = 0.40;
    
    const double totalMatricMarks = 1100.0;
    const double totalInterMarks = 550.0;
    const double totalEcatMarks = 400.0;
    
    double aggregate = (matricMarks / totalMatricMarks * matricWeight) +
                      (interMarks / totalInterMarks * interWeight) +
                      (ecatMarks / totalEcatMarks * ecatWeight);
    
    std::cout << "Aggregate for " << name << ": " << aggregate << std::endl;
}

// Function to compare Ecat Marks
void compareMarks(const std::string& nameStd1, double ecatMarksStd1, const std::string& nameStd2, double ecatMarksStd2) {
    if (ecatMarksStd1 > ecatMarksStd2) {
        std::cout << nameStd1 << " has higher Ecat marks." << std::endl;
    } else if (ecatMarksStd2 > ecatMarksStd1) {
        std::cout << nameStd2 << " has higher Ecat marks." << std::endl;
    } else {
        std::cout << "Both students have the same Ecat marks." << std::endl;
    }
}

int main() {
    std::string universityName = "My University"; // Replace with your university name
    int choice;

    do {
        printMenu(universityName);
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::string name;
                double matricMarks, interMarks, ecatMarks;
                std::cout << "Enter student name: ";
                std::cin >> name;
                std::cout << "Enter Matric marks: ";
                std::cin >> matricMarks;
                std::cout << "Enter Intermediate marks: ";
                std::cin >> interMarks;
                std::cout << "Enter Ecat marks: ";
                std::cin >> ecatMarks;
                calculateAggregate(name, matricMarks, interMarks, ecatMarks);
                break;

            case 2:
                std::string nameStd1, nameStd2;
                double ecatMarksStd1, ecatMarksStd2;
                std::cout << "Enter the name of student 1: ";
                std::cin >> nameStd1;
                std::cout << "Enter Ecat marks for student 1: ";
                std::cin >> ecatMarksStd1;
                std::cout << "Enter the name of student 2: ";
                std::cin >> nameStd2;
                std::cout << "Enter Ecat marks for student 2: ";
                std::cin >> ecatMarksStd2;
                compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
                break;

            case 3:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
