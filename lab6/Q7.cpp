// Program 7: Find the square of a given integer using an inline function
#include <iostream>
using namespace std;

inline int square(int n) {
    return n * n;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Square of " << num << " is " << square(num) << endl;
    return 0;
}

