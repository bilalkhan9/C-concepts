#include <iostream>

class Coordinate {
private:
    int x, y, z;

public:
    Coordinate(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}

    Coordinate& operator,(const Coordinate& other) {
        this->x = other.x;
        this->y = other.y;
        this->z = other.z;
        return *this;
    }

    void display() const {
        std::cout << "Coordinates: (" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

int main() {
    Coordinate c1(1, 2, 3);
    Coordinate c2(4, 5, 6);
    Coordinate c3;

    (c3 = c1), c2;

    c3.display();
system("pause");
    return 0;
}
