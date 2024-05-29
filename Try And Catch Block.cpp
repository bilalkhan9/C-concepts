#include <iostream>

using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw "Division by zero!";
    }
    return a / b;
}

int main() {
    double num1, num2;
    cout << "Enter numerator: ";
    cin >> num1;
    cout << "Enter denominator: ";
    cin >> num2;

    try {
        double result = divide(num1, num2);
        cout << "Result of division: " << result << endl;
    }
    catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }
system("pause");
    return 0;
}
