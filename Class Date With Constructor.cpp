#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
   
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

   
    void displayDate() {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
   
    Date date1(29, 5, 2024);

   
    date1.displayDate();
	system("pause");
    return 0;
}
