#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    
    bool operator==(const Time& other) const {
        return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
    }

    
    friend std::istream& operator>>(std::istream& is, Time& t) {
        std::cout << "Enter hours: ";
        is >> t.hours;
        std::cout << "Enter minutes: ";
        is >> t.minutes;
        std::cout << "Enter seconds: ";
        is >> t.seconds;
        return is;
    }

    
    friend std::ostream& operator<<(std::ostream& os, const Time& t) {
        os << t.hours << " hours, " << t.minutes << " minutes, " << t.seconds << " seconds";
        return os;
    }
};

int main() {
    Time t1, t2;

    std::cout << "Enter time 1:" << std::endl;
    std::cin >> t1;

    std::cout << "Enter time 2:" << std::endl;
    std::cin >> t2;

    std::cout << "Time 1: " << t1 << std::endl;
    std::cout << "Time 2: " << t2 << std::endl;

    if (t1 == t2) {
        std::cout << "Time 1 is equal to Time 2" << std::endl;
    } else {
        std::cout << "Time 1 is not equal to Time 2" << std::endl;
    }
	system("pause");
    return 0;
}
