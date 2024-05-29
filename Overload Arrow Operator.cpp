#include <iostream>

class Marks {
private:
    int marks;

public:
    Marks(int m) : marks(m) {}

    void printMarks() const {
        std::cout << "Marks: " << marks << std::endl;
    }

    Marks* operator->() {
        return this;
    }
};

int main() {
    Marks m(85);
    m->printMarks(); 
system("pause");
    return 0;
}
