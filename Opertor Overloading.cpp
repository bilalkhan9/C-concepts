#include <iostream>
#include <cmath>

class Complex {
private:
    double real;
    double imaginary;

public:
    
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imaginary * other.imaginary,
                       real * other.imaginary + imaginary * other.real);
    }

    
    bool operator==(const Complex& other) const {
        return (real == other.real) && (imaginary == other.imaginary);
    }

    
    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }

    
    void display() const {
        std::cout << real;
        if (imaginary >= 0) {
            std::cout << " + " << imaginary << "i";
        } else {
            std::cout << " - " << -imaginary << "i";
        }
    }
};

int main() {
    
    Complex c1(3, 2);
    Complex c2(1, 4);

    
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex product = c1 * c2;

    
    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    std::cout << "Difference: ";
    diff.display();
    std::cout << std::endl;

    std::cout << "Product: ";
    product.display();
    std::cout << std::endl;

    
    std::cout << "Equality check: " << (c1 == c2 ? "Equal" : "Not equal") << std::endl;
system("pause");
    return 0;
}
