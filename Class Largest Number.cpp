#include <iostream>

class LargestNumber {
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
    
    LargestNumber largest;
    int num1 = 10, num2 = 20, num3 = 15;
    int largestNum = largest.findLargest(num1, num2, num3);
    std::cout << "The largest number is: " << largestNum << std::endl;
	system("pause");
	    return 0;
}
