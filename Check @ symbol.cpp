#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

void validateGmailId(const string& gmailId) {
    size_t atPos = gmailId.find('@');
    size_t domainPos = gmailId.find("gmail.com");
    if (atPos == string::npos || domainPos == string::npos) {
        throw invalid_argument("Invalid Gmail ID: Must contain '@' and 'gmail.com'.");
    }
}

int main() {
    string gmailId;
    cout << "Enter your Gmail ID: ";
    cin >> gmailId;

    try {
        validateGmailId(gmailId);
        cout << "Gmail ID is valid." << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
system("pause");
    return 0;
}
