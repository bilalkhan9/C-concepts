#include <iostream>

class Dollar;

class Rupee {
public:
    Rupee() : amount(0) {}
    Rupee(int a) : amount(a) {}

    
    operator Dollar() const;

    
    void display() const {
        std::cout << "Amount in Rupees: " << amount << std::endl;
    }

private:
    int amount;
};

class Dollar {
public:
    Dollar() : amount(0) {}
    Dollar(int a) : amount(a) {}

    
    operator Rupee() const {
        return Rupee(amount / conversionRate);
    }

    
    void display() const {
        std::cout << "Amount in Dollars: $" << amount << std::endl;
    }

private:
    int amount;
    static constexpr double conversionRate; 
};

constexpr double Dollar::conversionRate = 74.16; 


Rupee::operator Dollar() const {
    return Dollar(amount / Dollar::conversionRate);
}

int main() {
    Rupee r = 23;
    Dollar d = r;

    d.display();
    r.display();

    r = d; 

    d.display();
    r.display();

    return 0;
}
