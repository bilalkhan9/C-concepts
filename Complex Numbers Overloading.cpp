#include <iostream>

class Complex {
    double real;
    double imaginary;

public:
    
    Complex(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {}

    
    void setData(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    
    void display() const {
        std::cout << "Real part: " << real << ", Imaginary part: " << imaginary << std::endl;
    }
};

int main() {
    Complex c1, c2;

    
    c1.setData(3.5, 2.0);

    
    c2.setData(1.0, -4.5);

    
    std::cout << "Complex number 1:" << std::endl;
    c1.display();

    std::cout << "Complex number 2:" << std::endl;
    c2.display();
	system("pause");
    return 0;
}
