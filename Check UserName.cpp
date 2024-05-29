#include <iostream>
#include <stdexcept>
#include <string>
#include <cctype>

using namespace std;

void validateUsername(const string& username) {
    if (username.size() < 6) {
        throw invalid_argument("Invalid username: Must contain at least 6 characters.");
    }
    for (char c : username) {
        if (!isalpha(c)) {
            throw invalid_argument("Invalid username: Must contain only alphabetic characters.");
        }
    }
}

int main() {
    string username;
    cout << "Enter your username: ";
    cin >> username;

    try {
        validateUsername(username);
        cout << "Username is valid." << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
