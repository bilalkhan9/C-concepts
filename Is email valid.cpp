#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

void validateEmail(const string& email) {
    size_t atPos = email.find('@');
    if (atPos == string::npos) {
        throw invalid_argument("Invalid email address: Missing '@' symbol.");
    }
}

int main() {
    string email;
    cout << "Enter your email address: ";
    cin >> email;

    try {
        validateEmail(email);
        cout << "Email address is valid." << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
system("pause");
    return 0;
}
