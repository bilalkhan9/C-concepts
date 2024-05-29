#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    double area;

    // Constructor for triangle
    Shape(double base, double height) {
        area = 0.5 * base * height;
    }

    // Constructor for rectangle
    Shape(double length, double width, char) {
        area = length * width;
    }

    // Constructor for circle
    Shape(double radius, char, char) {
        area = M_PI * radius * radius;
    }
};

int main() {
    int choice;
    double base, height, length, width, radius;

    cout << "Select a shape to calculate area:" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            Shape triangle(base, height);
            cout << "Area of the triangle: " << triangle.area << endl;
            break;
        case 2:
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            Shape rectangle(length, width, 'r');
            cout << "Area of the rectangle: " << rectangle.area << endl;
            break;
        case 3:
            cout << "Enter radius of the circle: ";
            cin >> radius;
            Shape circle(radius, 'c', 'r');
            cout << "Area of the circle: " << circle.area << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
