#include <iostream>
#include <stdexcept>
#include <string>
#include <cctype>

using namespace std;

void validatePincode(const string& pincode) {
    if (pincode.size() != 6) {
        throw invalid_argument("Invalid pincode: Must contain exactly 6 digits.");
    }
    for (char c : pincode) {
        if (!isdigit(c)) {
            throw invalid_argument("Invalid pincode: Must contain only digits.");
        }
    }
}

int main() {
    string pincode;
    cout << "Enter your area pincode: ";
    cin >> pincode;

    try {
        validatePincode(pincode);
        cout << "Pincode is valid." << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
system("pause");
    return 0;
}
