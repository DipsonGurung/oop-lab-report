// Program 9: Convert inches into centimeters
#include <iostream>
using namespace std;

int main() {
    float inches, centimeters;
    cout << "Enter length in inches: ";
    cin >> inches;

    centimeters = inches * 2.54;

    cout << "Length in centimeters: " << centimeters << " cm" << endl;
    return 0;
}

