#include <iostream>

class Integer {
private:
    int value;

public:
    Integer(int val) : value(val) {}

    bool operator!() const {
        return value == 0;
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Integer num1(0);
    Integer num2(5);

    std::cout << "num1 is zero: " << !num1 << std::endl;
    std::cout << "num2 is zero: " << !num2 << std::endl;
	system("pause");
    return 0;
}
