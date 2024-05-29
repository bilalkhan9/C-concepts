#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex() : real(0.0), imag(0.0) {}

        Complex(double real, double imag) : real(real), imag(imag) {}

    
    void set(double real, double imag) {
        this->real = real;
        this->imag = imag;
    }

    
    void print() const {
        std::cout << "Complex number: " << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << std::endl;
    }
};

int main() {
    
    Complex c;
    c.print();  

    c.set(2, 3);
    c.print();  
	system("pause");
    return 0;
}
