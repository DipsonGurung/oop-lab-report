// Program 3: Check if m is a multiple of n
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter two numbers (m and n): ";
    cin >> m >> n;
    cout << m << (m % n == 0 ? " is " : " is not ") << "a multiple of " << n << endl;
    return 0;
}

