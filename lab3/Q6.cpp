// Program 6: Find GCD and LCM of two numbers
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int g = gcd(a, b);
    int lcm = (a * b) / g;
    cout << "GCD: " << g << ", LCM: " << lcm << endl;
    return 0;
}

