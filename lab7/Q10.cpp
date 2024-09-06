// Program 10: Calculate the volume of a rectangular box using an inline function
#include <iostream>
using namespace std;

inline int volume(int length, int width, int height) {
    return length * width * height;
}

int main() {
    int length, width, height;
    cout << "Enter length of the box: ";
    cin >> length;

    cout << "Enter width of the box: ";
    cin >> width;

    cout << "Enter height of the box: ";
    cin >> height;

    cout << "Volume of the rectangular box is " << volume(length, width, height) << " cubic units" << endl;
    return 0;
}

