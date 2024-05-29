#include <iostream>
#include <stdexcept>
#include <string>
#include <cctype>

using namespace std;

void validatePassword(const string& password) {
    bool hasDigit = false;
    bool hasSpecial = false;
    bool hasUppercase = false;

    if (password.size() < 6) {
        throw invalid_argument("Invalid password: Must contain at least 6 characters.");
    }

    for (char c : password) {
        if (isdigit(c)) {
            hasDigit = true;
        } else if (ispunct(c)) {
            hasSpecial = true;
        } else if (isupper(c)) {
            hasUppercase = true;
        }
    }

    if (!hasDigit) {
        throw invalid_argument("Invalid password: Must contain at least one digit.");
    }
    if (!hasSpecial) {
        throw invalid_argument("Invalid password: Must contain at least one special character.");
    }
    if (!hasUppercase) {
        throw invalid_argument("Invalid password: Must contain at least one uppercase letter.");
    }
}

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;

    try {
        validatePassword(password);
        cout << "Password is valid." << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
