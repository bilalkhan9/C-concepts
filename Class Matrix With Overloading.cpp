#include <iostream>

class Matrix {
    int a[3][3];

public:
    // Constructor
    Matrix() {}

    // Overload unary - operator
    Matrix operator-() const;

    // Method to display matrix
    void display() const;

    // Method to input matrix values from the user
    void input();
};

Matrix Matrix::operator-() const {
    Matrix result;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            result.a[i][j] = -a[i][j];
    return result;
}

void Matrix::display() const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Matrix::input() {
    std::cout << "Enter elements of the matrix (3x3):" << std::endl;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            std::cin >> a[i][j];
}

int main() {
    Matrix mat;
    mat.input();

    std::cout << "Original Matrix:" << std::endl;
    mat.display();

    Matrix negatedMat = -mat;

    std::cout << "\nMatrix after negation:" << std::endl;
    negatedMat.display();
	system("pause");
    return 0;
}
