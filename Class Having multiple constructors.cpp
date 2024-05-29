#include<iostream>
using namespace std;

class A
{
protected:
    int x;

public:
    A()
    {
        x = 0;
        cout << "Constructor of Class A without any Argument is invoked" << endl;
    }
    A(int X)
    {
        x = X;
        cout << "Constructor of Class A with one Argument is invoked" << endl;
    }
    void Enter_x(void)
    {
        cout << "Enter The Value of x: ";
        cin >> x;
    }
    void Display_x(void)
    {
        cout << "\tx = " << x;
    }
};

class B : public A
{
protected:
    int y;

public:
    B() : A()
    {
        y = 0;
        cout << "Constructor of Class B without any Argument is invoked" << endl;
    }

    B(int X, int Y) : A(X)
    {
        y = Y;
        cout << "Constructor of Class B with two Arguments is invoked" << endl;
    }
    void Enter_y(void)
    {
        cout << "Enter the Value of y: ";
        cin >> y;
    }
    void Display_y(void)
    {
        cout << "\ty = " << y;
    }
};

class C : public B
{
private:
    int z;

public:
    C() : B()
    {
        z = 0;
        cout << "Constructor of Class C without any Argument is invoked" << endl;
    }
    C(int X, int Y, int Z) : B(X, Y)
    {
        z = Z;
        cout << "Constructor of Class C with three Arguments is invoked" << endl;
    }
    void Enter_z(void)
    {
        cout << "Enter the Value of z: ";
        cin >> z;
    }
    void Display_z(void)
    {
        cout << "\tz = " << z;
    }
};

int main()
{
    C objC1, objC2(1, 2, 3);
    objC1.Enter_x();
    objC1.Enter_y();
    objC1.Enter_z();

    cout << "\nValues of Object objC1: " << endl;
    objC1.Display_x();
    objC1.Display_y();
    objC1.Display_z();

    cout << endl;

    cout << "\nValues of Object objC2: " << endl;
    objC2.Display_x();
    objC2.Display_y();
    objC2.Display_z();
    system("pause");

    return 0;
}
