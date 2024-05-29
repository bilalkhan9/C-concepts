#include <iostream>

class Counter {
private:
    int count;

public:
    
    Counter(int c = 0) : count(c) {}

    
    Counter& operator++() {
        ++count;
        return *this;
    }

    
    Counter operator++(int) {
        Counter temp(*this);
        ++(*this);
        return temp;
    }

    
    Counter& operator--() {
        --count;
        return *this;
    }

    
    Counter operator--(int) {
        Counter temp(*this);
        --(*this);
        return temp;
    }

    
    void display() {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter counter(5);

    std::cout << "Initial value: ";
    counter.display();

    
    ++counter;
    counter++;
    std::cout << "After increment: ";
    counter.display();

    
    --counter;
    counter--;
    std::cout << "After decrement: ";
    counter.display();
	system("pause");
    return 0;
}
