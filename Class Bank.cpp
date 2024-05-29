#include <iostream>

class Bank {
private:
    double principal;
    double rate;
    int years;

public:
    
    Bank(double p, double r, int y) {
        principal = p;
        rate = r;
        years = y;
    }

    
    void readDetails() {
        std::cout << "Enter principal amount: ";
        std::cin >> principal;
        std::cout << "Enter rate of interest (in percentage): ";
        std::cin >> rate;
        std::cout << "Enter number of years: ";
        std::cin >> years;
    }

    
    double calculateSimpleInterest() {
        return (principal * rate * years) / 100;
    }

    
    void displaySimpleInterest(double simpleInterest) {
        std::cout << "Simple Interest: " << simpleInterest << std::endl;
    }
};

int main() {
    
    Bank bank(0, 0, 0);

    
    bank.readDetails();

    
    double simpleInterest = bank.calculateSimpleInterest();

    
    bank.displaySimpleInterest(simpleInterest);
	system("pause");
    return 0;
}
