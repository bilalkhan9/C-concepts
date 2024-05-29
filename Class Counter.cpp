#include <iostream>

class Counter {
private:
    int count;

public:
  
    Counter() {
        count = 0; 
    }

    
    void increment() {
        count++;
    }

    
    void decrement() {
        count--;
    }

    
    void display() {
        std::cout << "Current count: " << count << std::endl;
    }
};

int main() {
    
    Counter counter;

    
    std::cout << "Initial count: ";
    counter.display();

    
    counter.increment();

    
    std::cout << "Count after increment: ";
    counter.display();

    
    counter.decrement();

    
    std::cout << "Count after decrement: ";
    counter.display();
	system("pause");
    return 0;
}
