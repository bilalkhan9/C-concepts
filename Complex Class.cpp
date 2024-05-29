#include <iostream>

class Complex {
private:
    int a; 
    int b; 

public:
    
    void setData(int real, int imag) {
        a = real;
        b = imag;
    }

    
    void showData() const {
        std::cout << a << " + " << b << "i" << std::endl;
    }

    
    Complex add(const Complex& other) const {
        Complex result;
        result.a = a + other.a;
        result.b = b + other.b;
        return result;
    }
};

int main() {
    Complex c1, c2, sum;

    
    c1.setData(2, 3);

    
    c2.setData(1, -2);

    
    std::cout << "c1: ";
    c1.showData();

    
    std::cout << "c2: ";
    c2.showData();

    
    sum = c1.add(c2);

    
    std::cout << "Sum: ";
    sum.showData();
	system("pause");
    return 0;
}
