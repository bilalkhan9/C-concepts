#include <iostream>

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    
    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    
    double length, breadth, height;

    
    std::cout << "Enter the length of the box: ";
    std::cin >> length;
    std::cout << "Enter the breadth of the box: ";
    std::cin >> breadth;
    std::cout << "Enter the height of the box: ";
    std::cin >> height;

    
    Box box(length, breadth, height);

    
    double volume = box.calculateVolume();

    
    std::cout << "Volume of the box is: " << volume << std::endl;
	system("pause");
    return 0;
}
