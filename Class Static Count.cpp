#include <iostream>

class StaticCount {
private:
    static int count;

public:

    static void incrementCount() {
        count++;
    }


    static void displayCount() {
        std::cout << "Current count: " << count << std::endl;
    }
};


int StaticCount::count = 0;

int main() {

    StaticCount::incrementCount();
    StaticCount::incrementCount();
    StaticCount::incrementCount();


    StaticCount::displayCount();
	system("pause");
    return 0;
}
