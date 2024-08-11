// Program 6: Area and circumference of a circle
#include <iostream>
using namespace std;

int main() {
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area: " << 3.14159 * radius * radius << endl;
    cout << "Circumference: " << 2 * 3.14159 * radius << endl;
    return 0;
}

