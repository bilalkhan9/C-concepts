#include<iostream>
using namespace std;

class Shape {
public:
    virtual float area(float a, float b) = 0;
    void display() {
        cout << "Welcome" << endl;
    }
};

class Rectangle : public Shape {
public:
    float area(float x, float y) {
        return (x * y);
    }
};

class Triangle : public Shape {
public:
    float area(float h, float b) {
        return 0.5 * h * b;
    }
};

Shape* choice() {
    int c;

    cout << "Enter your Choice" << endl;
    cout << "1 - Rectangle " << endl;
    cout << "2 - Triangle " << endl;
    cin >> c;
    if (c == 1)
        return new Rectangle;
    else
        return new Triangle;
}

int main() {
    Shape* s;
    s = choice();
    cout << "Area = " << s->area(2, 3) << endl;
    system ("pause");
    return 0;
}
