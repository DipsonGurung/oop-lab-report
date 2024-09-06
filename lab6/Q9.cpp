// Program 9: Find the area of a Rectangle using an inline function
#include <iostream>
using namespace std;

inline int area(int length, int width) {
    return length * width;
}

int main() {
    int length, width;
    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    cout << "Area of the rectangle is " << area(length, width) << " square units" << endl;
    return 0;
}

