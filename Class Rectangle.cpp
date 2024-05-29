#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
   
    Rectangle(double l, double w) : length(l), width(w) {}

   
    double area() const {
        return length * width;
    }
};

int main() {
   
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    Rectangle rect(length, width);
    std::cout << "Area of the rectangle: " << rect.area() << std::endl;
	system("pause");
    return 0;
}
