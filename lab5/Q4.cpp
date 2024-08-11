// Program 4: Addition of two Time objects using operator overloading
#include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    // Overload '+' operator for addition
    Time operator+(const Time& t) {
        int totalMinutes = minutes + t.minutes;
        int totalHours = hours + t.hours + (totalMinutes / 60);
        totalMinutes %= 60;
        return Time(totalHours, totalMinutes);
    }

    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 50), t2(1, 30);
    Time t3 = t1 + t2;
    cout << "Addition of time: ";
    t3.display();
    return 0;
}

