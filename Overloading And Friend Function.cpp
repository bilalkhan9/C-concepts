#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    friend Complex operator+(const Complex& c1, const Complex& c2);
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real << " + " << c.imaginary << "i";
    return os;
}

int main() {
    Complex c1(3, 2);
    Complex c2(1, 4);
    Complex sum = c1 + c2;

    std::cout << "Sum: " << sum << std::endl;
	system("pause");
    return 0;
}
