#include <iostream>

class Time {
public:
    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int s) {
        hours = s / 3600;
        s = s % 3600;
        minutes = s / 60;
        seconds = s % 60;
    }

    void display() {
        std::cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
    }

private:
    int hours;
    int minutes;
    int seconds;
};

int main() {
    int duration;
    std::cout << "Enter time duration in seconds: ";
    std::cin >> duration;

    Time t1 = duration;
    t1.display();
system("pause");
    return 0;
}
