#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    std::string department;

public:
    
    Student(const std::string& n, int roll, const std::string& dept) {
        name = n;
        rollNumber = roll;
        department = dept;
    }

    
    void displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Department: " << department << std::endl;
    }
};

int main() {
    
    std::string name;
    int rollNumber;
    std::string department;

    std::cout << "Enter student details:" << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, name);
    std::cout << "Roll Number: ";
    std::cin >> rollNumber;
    std::cin.ignore();
    std::cout << "Department: ";
    std::getline(std::cin, department);

    
    Student student(name, rollNumber, department);

    
    std::cout << "\nStudent Details:" << std::endl;
    student.displayDetails();
	system("pause");
    return 0;
}
