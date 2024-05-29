#include <iostream>

class fraction {
    long numerator;
    long denominator;

public:
    fraction(long n = 0, long d = 1); // Default denominator as 1
    friend std::ostream& operator<<(std::ostream& out, const fraction& f);
    friend std::istream& operator>>(std::istream& in, fraction& f);
    fraction& operator++();    // Pre-increment
    fraction operator++(int);  // Post-increment
};

fraction::fraction(long n, long d) : numerator(n), denominator(d) {}

std::ostream& operator<<(std::ostream& out, const fraction& f) {
    out << f.numerator << '/' << f.denominator;
    return out;
}

std::istream& operator>>(std::istream& in, fraction& f) {
    char slash;
    in >> f.numerator >> slash >> f.denominator;
    if (f.denominator == 0) {
        std::cerr << "Error: Denominator cannot be zero." << std::endl;
        f = fraction(); // Reset to default
    }
    return in;
}

fraction& fraction::operator++() {
    numerator += denominator;
    return *this;
}

fraction fraction::operator++(int) {
    fraction temp = *this;
    ++(*this);
    return temp;
}

int main() {
    fraction f1(2, 3);
    std::cout << "Original fraction: " << f1 << std::endl;
    
    fraction f2 = ++f1;
    std::cout << "After pre-increment: " << f1 << ", " << f2 << std::endl;
    
    fraction f3 = f1++;
    std::cout << "After post-increment: " << f1 << ", " << f3 << std::endl;
    
    std::cout << "Enter a fraction (numerator/denominator): ";
    std::cin >> f1;
    std::cout << "You entered: " << f1 << std::endl;
	system("pause");    
    return 0;
}
