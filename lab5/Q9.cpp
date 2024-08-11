// Program 9: Find the cube of a given integer using an inline function
#include <iostream>
using namespace std;

inline int cube(int n) {
    return n * n * n;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Cube of " << num << " is " << cube(num) << endl;
    return 0;
}

