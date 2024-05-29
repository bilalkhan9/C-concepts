#include <iostream>

class Complex {
public:
    Complex() : real(0), imag(0) {}
    Complex(int r) : real(r), imag(0) {}  // Constructor for conversion from int to Complex

    void display() {
        std::cout << "Real part: " << real << ", Imaginary part: " << imag << std::endl;
    }

private:
    int real;
    int imag;
};

int main() {
    Complex c1;
    int x = 5;

    
    c1 = static_cast<Complex>(x);

    c1.display();
	system("pause");
    return 0;
}
