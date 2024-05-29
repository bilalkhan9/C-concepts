#include <iostream>

class Dollar {
public:
    Dollar() : amount(0) {}
    Dollar(int a) : amount(a) {}

    
    Dollar& operator=(int a) {
        amount = a;
        return *this;
    }

    
    void display() const {
        std::cout << "Amount in dollars: $" << amount << std::endl;
    }

private:
    int amount;
};

int main() {
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    system("pause");
    return 0;
}
