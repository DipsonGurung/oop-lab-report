// Program 5: Subtraction of two Time objects using operator overloading
#include <iostream>
using namespace std;

class Time {
    int hours, minutes;
public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    // Overload '-' operator for subtraction
    Time operator-(const Time& t) {
        int totalMinutes1 = hours * 60 + minutes;
        int totalMinutes2 = t.hours * 60 + t.minutes;
        int diff = totalMinutes1 - totalMinutes2;
        int diffHours = diff / 60;
        int diffMinutes = diff % 60;
        return Time(diffHours, diffMinutes);
    }

    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(3, 45), t2(1, 30);
    Time t3 = t1 - t2;
    cout << "Subtraction of time: ";
    t3.display();
    return 0;
}

