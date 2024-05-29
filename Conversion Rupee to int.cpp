#include <iostream>

class Rupee {
public:
    Rupee() : amount(0) {}
    Rupee(int a) : amount(a) {}

    
    operator int() const {
        return amount;
    }

private:
    int amount;
};

int main() {
    Rupee r = 10;
    int x = r;

    std::cout << x;
system("pause");
    return 0;
}
