#include <iostream>
#include <string>

using namespace std;

int main() {
    try {
        cout << "Enter an integer: ";
        int num;
        cin >> num;
        if (cin.fail()) {
            throw "Invalid input. Please enter an integer.";
        }
        cout << "You entered: " << num << endl;
    }
    catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }
    catch (...) {
        cerr << "Unknown error occurred." << endl;
    }

    try {
        cout << "Enter a string: ";
        string str;
        cin >> str;
        cout << "You entered: " << str << endl;
    }
    catch (...) {
        cerr << "Error occurred while processing string input." << endl;
    }
	system("pause");
    return 0;
}
