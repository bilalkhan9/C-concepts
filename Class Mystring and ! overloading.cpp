#include <iostream>
#include <cstring>

class mystring {
    char str[100];

public:
    
    mystring(const char* s) {
        strcpy(str, s);
    }

    
    mystring operator!() const;

    
    void display() const;
};

mystring mystring::operator!() const {
    mystring result = *this; 
    int length = strlen(result.str);
    for (int i = 0; i < length; ++i) {
        if (islower(result.str[i]))
            result.str[i] = toupper(result.str[i]);
        else if (isupper(result.str[i]))
            result.str[i] = tolower(result.str[i]);
    }
    return result;
}

void mystring::display() const {
    std::cout << str << std::endl;
}

int main() {
    mystring str("Hello World!");

    std::cout << "Original String: ";
    str.display();

    mystring reversedStr = !str;

    std::cout << "String after reversing case: ";
    reversedStr.display();
	system("pause");
    return 0;
}
