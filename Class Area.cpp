#include <iostream>

class Area {
public:
    
    double squareArea(double side) const {
        return side * side;
    }

    
    double rectangleArea(double length, double width) const {
        return length * width;
    }

    
    double circleArea(double radius) const {
        return 3.14159 * radius * radius; 
    }
};

int main() {
  
    Area areaCalculator;

  
    double side;
    std::cout << "Enter the side of the square: ";
    std::cin >> side;
    std::cout << "Area of the square: " << areaCalculator.squareArea(side) << std::endl;

  
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    std::cout << "Area of the rectangle: " << areaCalculator.rectangleArea(length, width) << std::endl;

  
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Area of the circle: " << areaCalculator.circleArea(radius) << std::endl;
	system("pause");
    return 0;
}
