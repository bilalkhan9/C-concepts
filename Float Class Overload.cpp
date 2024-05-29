#include <iostream> // Include necessary header for I/O operations
using namespace std;

class Float
{
private:
    float x;

public:
    void setdata(float a)
    {
        x = a;
    }
    void getData()
    {
        cout << "\nx: " << x;
    }

    Float operator+(Float c)
    {
        Float temp;
        temp.x = x + c.x;
        return temp;
    }

    Float operator-(Float c)
    {
        Float temp;
        temp.x = x - c.x;
        return temp;
    }

    Float operator*(Float c)
    {
        Float temp;
        temp.x = x * c.x;
        return temp;
    }

    Float operator/(Float c)
    {
        Float temp;
        temp.x = x / c.x;
        return temp;
    }
};

int main()
{
    Float c1, c2, c3, c4, c5, c6;
    float num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    c1.setdata(num1);
    c2.setdata(num2);

    c3 = c1 + c2;
    cout << "\nAddition Result:";
    c3.getData();

    c4 = c1 - c2;
    cout << "\nSubtraction Result:";
    c4.getData();

    c5 = c1 * c2;
    cout << "\nMultiplication Result:";
    c5.getData();

    c6 = c1 / c2;
    cout << "\nDivision Result:";
    c6.getData();

    cin.get();
	system ("pause"); // Pause the program
    return 0;
}
