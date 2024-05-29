#include <iostream>

class Greatest {
public:
    
    int findLargest(int num1, int num2, int num3) {
        if (num1 >= num2 && num1 >= num3) {
            return num1;
        } else if (num2 >= num1 && num2 >= num3) {
            return num2;
        } else {
            return num3;
        }
    }
};

int main() {
    
    Greatest greatest;

    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int largestNum = greatest.findLargest(num1, num2, num3);
    std::cout << "The largest number is: " << largestNum << std::endl;
	system("pause");
    return 0;
}
