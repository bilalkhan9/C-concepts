#include <iostream>

class Matrix {
    int a[3][3];

public:
    
    Matrix() {}

    
    Matrix operator+(const Matrix& other) const;

    
    void display() const;

    
    void input();
};

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            result.a[i][j] = a[i][j] + other.a[i][j];
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
    Matrix m1, m2, m3;

    
    std::cout << "Enter elements of the first matrix:" << std::endl;
    m1.input();

    
    std::cout << "Enter elements of the second matrix:" << std::endl;
    m2.input();

    
    m3 = m1 + m2;

    
    std::cout << "Matrix 1:" << std::endl;
    m1.display();

    std::cout << "\nMatrix 2:" << std::endl;
    m2.display();

    std::cout << "\nMatrix 3 (Result of addition):" << std::endl;
    m3.display();
	system("pause");
    return 0;
}
