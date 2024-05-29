#include <iostream>

class Square {
private:
    int count; 

public:
    
    Square() : count(0) {}

  
    int square(int num) {
        count++; 
        return num * num;
    }

  
    int getCount() const {
        return count;
    }
};

int main() {
    Square squareObj;
    
    int num = 5;
    std::cout << "Square of " << num << " is: " << squareObj.square(num) << std::endl;
    std::cout << "Function called " << squareObj.getCount() << " times." << std::endl;

    num = 10;
    std::cout << "Square of " << num << " is: " << squareObj.square(num) << std::endl;
    std::cout << "Function called " << squareObj.getCount() << " times." << std::endl;
	system ("pause");
    return 0;
}
