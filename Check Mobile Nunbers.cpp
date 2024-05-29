#include <iostream>
#include <stdexcept>
#include <string>
#include <cctype>

using namespace std;

void validateMobileNumber(const string& number) {
    if (number.size() != 10) {
        throw invalid_argument("Invalid mobile number: Must contain exactly 10 digits.");
    }
    for (char c : number) {
        if (!isdigit(c)) {
            throw invalid_argument("Invalid mobile number: Must contain only digits.");
        }
    }
}

int main() {
    string mobileNumber;
    cout << "Enter your mobile number: ";
    cin >> mobileNumber;

    try {
        validateMobileNumber(mobileNumber);
        cout << "Mobile number is valid." << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
system("pause");
    return 0;
}
