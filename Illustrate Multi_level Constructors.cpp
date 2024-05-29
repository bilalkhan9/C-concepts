#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string type;
public:
    // Constructor
    Animal() {
        cout << "Animal constructor called" << endl;
        type = "Unknown";
    }

    // Parameterized constructor
    Animal(string t) {
        cout << "Animal parameterized constructor called" << endl;
        type = t;
    }

    // Display method
    void display() {
        cout << "Type: " << type << endl;
    }
};

// Derived class 1
class Mammal : public Animal {
protected:
    int legs;
public:
    // Constructor
    Mammal() {
        cout << "Mammal constructor called" << endl;
        legs = 4;
    }

    // Parameterized constructor
    Mammal(string t, int l) : Animal(t) {
        cout << "Mammal parameterized constructor called" << endl;
        legs = l;
    }

    // Display method
    void display() {
        Animal::display();
        cout << "Legs: " << legs << endl;
    }
};

// Derived class 2
class Dog : public Mammal {
private:
    string breed;
public:
    // Constructor
    Dog() {
        cout << "Dog constructor called" << endl;
        breed = "Unknown";
    }

    // Parameterized constructor
    Dog(string t, int l, string b) : Mammal(t, l) {
        cout << "Dog parameterized constructor called" << endl;
        breed = b;
    }

    // Display method
    void display() {
        Mammal::display();
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    // Creating objects and demonstrating constructors
    Animal a;
    a.display();
    cout << "------------------" << endl;
    
    Mammal m("Mammal", 4);
    m.display();
    cout << "------------------" << endl;
    
    Dog d("Mammal", 4, "Labrador");
    d.display();
    cout << "------------------" << endl;
system("pause");
    return 0;
}
