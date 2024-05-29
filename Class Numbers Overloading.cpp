#include <iostream>

class Numbers {
private:
    int x, y, z;

public:
    Numbers(int a = 0, int b = 0, int c = 0) : x(a), y(b), z(c) {}

    
    Numbers operator-() const {
        return Numbers(-x, -y, -z);
    }

    
    void display() const {
        std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
    }
};

int main() {
    Numbers num(10, 20, 30);
    Numbers negated = -num;

    std::cout << "Original numbers:" << std::endl;
    num.display();

    std::cout << "Negated numbers:" << std::endl;
    negated.display();
	system("pause");
    return 0;
}
