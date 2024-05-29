#include <iostream>

class Item {
public:
    Item() : value(0) {}
    Item(int v) : value(v) {}

    void display() {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

class Product {
public:
    Product() : price(0), quantity(0) {}
    Product(int p, int q) : price(p), quantity(q) {}

    void setData(int p, int q) {
        price = p;
        quantity = q;
    }

    
    operator Item() const {
        return Item(price * quantity); 
    }

private:
    int price;
    int quantity;
};

int main() {
    Item i1;
    Product p1;
    p1.setData(3, 4);

    i1 = static_cast<Item>(p1); 

    i1.display();
system("pause");
    return 0;
}
