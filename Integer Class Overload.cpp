#include <iostream>

class Integer {
private:
    int x;

public:
    Integer(int val) : x(val) {}

    operator int() const {
        return x;
    }
};

int main() {
    Integer num(42);

    int intValue = int(num);

    std::cout << "Integer value: " << intValue << std::endl;
system("pause");
    return 0;
}
