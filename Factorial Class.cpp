#include <iostream>

class Factorial {
public:
    
    int calculate(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * calculate(n - 1);
        }
    }
};

int main() {
    
    Factorial fact;
    int number = 5; 
    int result = fact.calculate(number);
    std::cout << "Factorial of " << number << " is: " << result << std::endl;
	system("pause");
    return 0;
}
