#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imaginary = other.imaginary;
        }
        return *this;
    }

    void display() const {
        std::cout << "Real part: " << real << ", Imaginary part: " << imaginary << std::endl;
    }
};

int main() {
    Complex c1(3.5, 2.0);
    Complex c2;

    std::cout << "Before assignment:" << std::endl;
    std::cout << "c1:";
    c1.display();
    std::cout << "c2:";
    c2.display();

    c2 = c1;

    std::cout << "\nAfter assignment:" << std::endl;
    std::cout << "c1:";
    c1.display();
    std::cout << "c2:";
    c2.display();
	system("pause");
    return 0;
}
