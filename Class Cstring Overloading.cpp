#include <iostream>
#include <cstring>

class CString {
private:
    char* str;

public:
    
    CString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    
    ~CString() {
        delete[] str;
    }

    
    CString(const CString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    
    friend CString operator+(const CString& lhs, const CString& rhs) {
        char* temp = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
        strcpy(temp, lhs.str);
        strcat(temp, rhs.str);
        CString result(temp);
        delete[] temp;
        return result;
    }

    
    friend bool operator==(const CString& lhs, const CString& rhs) {
        return strcmp(lhs.str, rhs.str) == 0;
    }

    
    void display() const {
        std::cout << str;
    }
};

int main() {
    CString str1("Bilal, ");
    CString str2("Khan!");
    
    
    CString result = str1 + str2;
    std::cout << "Concatenated string: ";
    result.display();
    std::cout << std::endl;

    
    if (str1 == str2) {
        std::cout << "Strings are equal." << std::endl;
    } else {
        std::cout << "Strings are not equal." << std::endl;
    }
	system("pause");
    return 0;
}
