#include <iostream>

class Complex {
public:
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    void setData(int r, int i) {
        real = r;
        imag = i;
    }

    operator int() const {
        return real; 
    }

private:
    int real;
    int imag;
};

int main() {
    Complex c1;
    c1.setData(3, 4);
    int x;
    x = c1;

    std::cout << "Converted integer: " << x << std::endl;
system("pause");
    return 0;
}
