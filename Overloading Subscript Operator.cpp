#include <iostream>
#include <stdexcept>

class IntList {
    int data[10]; 

public:
    
    int& operator[](int index);

    
    void display() const;
};

int& IntList::operator[](int index) {
    if (index < 0 || index >= 10) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

void IntList::display() const {
    std::cout << "List content: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    IntList myList;

    
    for (int i = 0; i < 10; ++i) {
        myList[i] = i * 2;
    }

    
    myList.display();

    try {
        
        std::cout << "Element at index 5: " << myList[5] << std::endl;
        
        
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	system("pause");
    return 0;
}
