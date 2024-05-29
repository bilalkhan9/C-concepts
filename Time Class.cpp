#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Time() : hours(0), minutes(0), seconds(0) {}

    // Method to set the time
    void setTime(int hours, int minutes, int seconds) {
        if (hours >= 0 && minutes >= 0 && seconds >= 0 && minutes < 60 && seconds < 60) {
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        } else {
            std::cerr << "Invalid time format." << std::endl;
        }
    }

    // Method to display the time
    void displayTime() const {
        std::cout << "Time: " << hours << " hr " << minutes << " min " << seconds << " sec" << std::endl;
    }
};

int main() {
    // Example usage
    Time t;
    t.displayTime(); // Output: Time: 0 hr 0 min 0 sec

    t.setTime(3, 45, 20);
    t.displayTime(); // Output: Time: 3 hr 45 min 20 sec
	system("pause");
    return 0;
}
