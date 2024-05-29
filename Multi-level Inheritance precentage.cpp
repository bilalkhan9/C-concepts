#include <iostream>
using namespace std;

class Base {
protected:
    float marks1, marks2, marks3;

public:
    void input() {
        cout << "Enter Marks Of All Subjects" << endl;
        cin >> marks1 >> marks2 >> marks3;
    }
};

class derived : public Base {
protected:
    float sum;

public:
    void total() {
        sum = marks1 + marks2 + marks3;
    }
};

class percentage : public derived {
private:
    float percentage;

public:
    void calculatepercentage() {
        total(); // Calculate the sum
        percentage = (sum / 300.0) * 100.0;
    }

    void display() {
        cout << "Percentage = " << percentage << endl;
    }
};

int main() {
    percentage p;
    p.input();
    p.calculatepercentage();
    p.display();
system("pause");
    return 0;
}
