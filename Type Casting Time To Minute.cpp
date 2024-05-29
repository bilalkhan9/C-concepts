#include <iostream>

class Minute;

class Time {
public:
    Time() : hours(0), minutes(0) {}
    Time(int h, int m) : hours(h), minutes(m) {}

    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    void setHours(int h) {
        hours = h;
    }

    void setMinutes(int m) {
        minutes = m;
    }

    void display() const {
        std::cout << "Time: " << hours << " hours, " << minutes << " minutes" << std::endl;
    }


    operator Minute() const;

private:
    int hours;
    int minutes;
};

class Minute {
public:
    Minute() : minutes(0) {}
    Minute(int m) : minutes(m) {}

    int getMinutes() const {
        return minutes;
    }

    void setMinutes(int m) {
        minutes = m;
    }

    void display() const {
        std::cout << "Minutes: " << minutes << std::endl;
    }

private:
    int minutes;
};


Time::operator Minute() const {
    return Minute(hours * 60 + minutes);
}

int main() {
    Time t1(2, 30);
    t1.display();

    Minute m1;
    m1.display();

    m1 = t1; 

    t1.display();
    m1.display();

system("pause");
    return 0;
}
