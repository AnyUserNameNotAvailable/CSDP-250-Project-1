#include <iostream>
#include "LinkedList.hpp"

int main() {
    Studentlist list;
    int choice;
    int id;
    double gpa;
    
    while (true) {
        std::cout << "Menu:\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Insert Student\n";
        std::cout << "3. Delete Student\n";
        std::cout << "4. Display List\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                std::cout << "Enter student ID: ";
                std::cin >> id;
                std::cout << "Enter student GPA: ";
                std::cin >> gpa;
                list.appendStudentNode(id, gpa);
                break;
            case 2:
                std::cout << "Enter student ID: ";
                std::cin >> id;
                std::cout << "Enter student GPA: ";
                std::cin >> gpa;
                list.insertStudentNode(id, gpa);
                break;
            case 3:
                std::cout << "Enter student ID: ";
                std::cin >> id;
                std::cout << "Enter student GPA: ";
                std::cin >> gpa;
                list.deleteStudentNode(id, gpa);
                break;
            case 4:
                std::cout << "Student List:\n";
                list.displayList();
                break;
            case 5:
                std::cout << "Exiting program. Goodbye!";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
        
        
        return 0;
    }
}
