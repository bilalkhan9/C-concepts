#include <iostream>

class Circle {
private:
    double radius;

public:
    
    Circle(double r) : radius(r) {}

    
    double area() const {
        return 3.14159 * radius * radius; 
    }
};

int main() {
    
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    Circle circle(radius);
    std::cout << "Area of the circle: " << circle.area() << std::endl;
	system("pause");
    return 0;
}
