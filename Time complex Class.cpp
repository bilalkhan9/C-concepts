#include <iostream>

class Time {
private:
    int h; 
    int m; 
    int s; 

public:
    
    void setTime(int hour, int minute, int second) {
        h = hour;
        m = minute;
        s = second;
    }

    
    void showTime() const {
        std::cout << h << ":" << m << ":" << s << std::endl;
    }

    
    void normalize() {
        m += s / 60;
        s %= 60;
        h += m / 60;
        m %= 60;
        h %= 24; 
    }

    
    Time add(const Time& other) const {
        Time result;
        result.s = s + other.s;
        result.m = m + other.m;
        result.h = h + other.h;
        result.normalize(); 
        return result;
    }
};

int main() {
    Time t1, t2, sum;

    
    t1.setTime(10, 30, 45);

    
    t2.setTime(2, 45, 20);

    
    std::cout << "Time 1: ";
    t1.showTime();

    
    std::cout << "Time 2: ";
    t2.showTime();

    
    sum = t1.add(t2);

   
    std::cout << "Sum: ";
    sum.showTime();
	system("pause");
    return 0;
}
