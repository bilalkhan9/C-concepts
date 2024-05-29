#include <iostream>


class Invent2;

class Invent1 {
public:
    Invent1() : quantity(0), cost(0) {}
    Invent1(int q, float c) : quantity(q), cost(c) {}


    operator float() const {
        return static_cast<float>(quantity * cost);
    }


    operator Invent2() const;

private:
    int quantity;
    float cost;
};

class Invent2 {
public:
    Invent2() : item(0), value(0) {}
    Invent2(int i, float v) : item(i), value(v) {}

    void display() {
        std::cout << "Item: " << item << ", Value: " << value << std::endl;
    }

private:
    int item;
    float value;
};


Invent1::operator Invent2() const {
    return Invent2(quantity, cost);
}

int main() {
    Invent1 x(4, 5);
    Invent2 y;
    float z;

    z = x; // Invent1 to float
    y = x; // Invent1 to Invent2

    std::cout << "Converted float: " << z << std::endl;
    y.display();
system("pause");
    return 0;
}
