// Program 8: Find the square root of a given integer using an inline function
#include <iostream>
#include <cmath>
using namespace std;

inline double squareRoot(int n) {
    return sqrt(n);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Square root of " << num << " is " << squareRoot(num) << endl;
    return 0;
}

