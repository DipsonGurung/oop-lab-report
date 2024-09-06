#include <iostream>
using namespace std;

// Base class
class Clock {
protected:
    int hours;
    int minutes;
    int seconds;
public:
    // Constructor for Clock class
    Clock(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    // Function to display time
    void displayTime() {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

// Derived class
class Wall_clock : public Clock {
private:
    string location;  // Additional attribute specific to Wall_clock
public:
    // Constructor for Wall_clock class
    Wall_clock(int h = 0, int m = 0, int s = 0, string loc = "") : Clock(h, m, s), location(loc) {}

    // Function to display Wall_clock details
    void displayWallClock() {
        cout << "Wall Clock Location: " << location << endl;
        displayTime();
    }
};

int main() {
    // Creating two objects of Wall_clock with all initial states set to 0 or NULL
    Wall_clock clock1;
    Wall_clock clock2;

    // Displaying the details of both Wall_clock objects
    cout << "Clock 1:" << endl;
    clock1.displayWallClock();

    cout << "\nClock 2:" << endl;
    clock2.displayWallClock();

    return 0;
}

