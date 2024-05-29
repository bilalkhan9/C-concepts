#include <iostream>

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}

    void operator()(int a, int b, int c) {
        feet = a + c + 5;
        inches = a + b + 15;
    }

    void display() const {
        std::cout << "Feet: " << feet << ", Inches: " << inches << std::endl;
    }
};

int main() {
    Distance d;

    d(2, 3, 4); 

    d.display();
system("pause");
    return 0;
}
