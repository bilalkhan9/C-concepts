#include <iostream>

class ReverseNumber {
public:
   
    int reverse(int num) {
        int reversed = 0;
        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        return reversed;
    }
};

int main() {
   
    ReverseNumber reverser;
    int num = 12345;
    int reversedNum = reverser.reverse(num);
    std::cout << "Reverse of " << num << " is: " << reversedNum << std::endl;
	system ("pause");
    return 0;
}
