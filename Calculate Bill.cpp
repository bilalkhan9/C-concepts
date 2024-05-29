#include <iostream>

class Bill {
private:
    std::string customerName;
    int units;

public:
    
    void get() {
        std::cout << "Enter customer name: ";
        std::getline(std::cin, customerName);
        std::cout << "Enter units consumed: ";
        std::cin >> units;
        std::cin.ignore(); 
    }

    
    void calculateBill() {
        double billAmount = 0;
        if (units <= 100) {
            billAmount = units * 1.20;
        } else if (units <= 200) {
            billAmount = 100 * 1.20 + (units - 100) * 2;
        } else {b
            billAmount = 100 * 1.20 + 100 * 2 + (units - 200) * 3;
        }
        std::cout << "Electricity bill for " << customerName << " is: Rs. " << billAmount << std::endl;
    }
};

int main() {
    
    Bill electricityBill;

    
    electricityBill.get();

    
    electricityBill.calculateBill();
	system("pause");
    return 0;
}
