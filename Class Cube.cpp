#include <iostream>

class Cube {
private:
    double side_length;

public:
    
    Cube(double side) {
        side_length = side;
    }

    
    double volume() {
        return side_length * side_length * side_length;
    }
};

int main() {
    
    Cube cube(5);

    
    std::cout << "Volume of the cube with side length 5 is: " << cube.volume() << std::endl;
	system("pause");
    return 0;
}
