#include <iostream>
#include <stdexcept>
#include <sstream>

using namespace std;

double calculate(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0)
                throw runtime_error("Division by zero!");
            return num1 / num2;
        default:
            throw invalid_argument("Invalid operator!");
    }
}

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    try {
        double result = calculate(num1, num2, op);
        cout << "Result: " << result << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
system("pause");
    return 0;
}
