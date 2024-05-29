#include <iostream>
using namespace std;

class Factorial {
private:
    int num;
    unsigned long long fact;
public:
    Factorial(int n) : num(n), fact(1) {}
    Factorial(const Factorial &obj) : num(obj.num), fact(obj.fact) {}

    void calculate() {
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
    }

    void display() {
        cout << "Factorial of " << num << " is: " << fact << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Factorial f1(num);
    Factorial f2 = f1;

    f1.calculate();
    f1.display();

    f2.display();

    return 0;
}
