// Program 8: Convert feet into meters
#include <iostream>
using namespace std;

int main() {
    float feet, meters;
    cout << "Enter distance in feet: ";
    cin >> feet;

    meters = feet * 0.3048;

    cout << "Distance in meters: " << meters << " m" << endl;
    return 0;
}

