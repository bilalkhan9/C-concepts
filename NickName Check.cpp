#include <iostream>
#include <stdexcept>
#include <string>
#include <cctype>

using namespace std;

void validateNickname(const string& nickname) {
    if (nickname.size() > 8) {
        throw invalid_argument("Invalid nickname: Must contain at most 8 characters.");
    }
    for (char c : nickname) {
        if (isdigit(c) || ispunct(c) || isspace(c)) {
            throw invalid_argument("Invalid nickname: Must contain only alphabetic characters.");
        }
    }
}

int main() {
    string nickname;
    cout << "Enter your nickname: ";
    cin >> nickname;

    try {
        validateNickname(nickname);
        cout << "Nickname is valid." << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
system("pause");
    return 0;
}
