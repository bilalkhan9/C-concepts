#include <iostream>
using namespace std;


class Base {
protected:
    int baseValue;
public:

    Base(int value) : baseValue(value) {
        cout << "Base class constructor called with value: " << baseValue << endl;
    }
};


class Derived : public Base {
private:
    int derivedValue;
public:

    Derived(int base, int derived) : Base(base), derivedValue(derived) {
        cout << "Derived class constructor called with values: " << base << " and " << derived << endl;
    }


    void displayValues() {
        cout << "Base value: " << baseValue << endl;
        cout << "Derived value: " << derivedValue << endl;
    }
};

int main() {

    Derived obj(10, 20);


    obj.displayValues();

    return 0;
}
