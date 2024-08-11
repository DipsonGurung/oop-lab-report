// Program 5: Area and perimeter of a rectangle
#include <iostream>
using namespace std;

int main() {
    double length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area: " << length * width << endl;
    cout << "Perimeter: " << 2 * (length + width) << endl;
    return 0;
}

