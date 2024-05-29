#include <iostream>

class Complex {
    double real;
    double imaginary;

public:
    
    Complex(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {}

    
    friend std::ostream& operator<<(std::ostream& out, const Complex& c);

    
    friend std::istream& operator>>(std::istream& in, Complex& c);
};

std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << c.real;
    if (c.imaginary >= 0)
        out << "+";
    out << c.imaginary << "i";
    return out;
}

std::istream& operator>>(std::istream& in, Complex& c) {
    std::cout << "Enter real part: ";
    in >> c.real;
    std::cout << "Enter imaginary part: ";
    in >> c.imaginary;
    return in;
}

int main() {
    Complex c1, c2;

    std::cout << "Enter complex number 1:" << std::endl;
    std::cin >> c1;

    std::cout << "Enter complex number 2:" << std::endl;
    std::cin >> c2;

    std::cout << "Complex number 1: " << c1 << std::endl;
    std::cout << "Complex number 2: " << c2 << std::endl;
	system("pause");
    return 0;
}
