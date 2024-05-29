#include <iostream>

class Student {
private:
    int id;
    std::string name;

public:

    Student(int id, const std::string& name) : id(id), name(name) {}


    void display() const {
        std::cout << "Student ID: " << id << ", Name: " << name << std::endl;
    }
};


void* operator new(size_t size) {
    std::cout << "Custom new operator called" << std::endl;
    return ::operator new(size);
}


void operator delete(void* ptr) noexcept {
    std::cout << "Custom delete operator called" << std::endl;
    ::operator delete(ptr);
}

int main() {

    Student* student1 = new Student(1, "Bilal");
    Student* student2 = new Student(2, "Ali");


    std::cout << "Details of student 1:" << std::endl;
    student1->display();
    std::cout << "Details of student 2:" << std::endl;
    student2->display();


    delete student1;
    delete student2;

    return 0;
}
