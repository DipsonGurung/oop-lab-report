// Program 4: Class Number with two instance variables, getMax() function
#include <iostream>
using namespace std;

class Number {
    int x, y;
public:
    Number(int a, int b) : x(a), y(b) {}
    int getMax() {
        return (x > y) ? x : y;
    }
};

int main() {
    Number num(10, 20);
    cout << "Larger number: " << num.getMax() << endl;
    return 0;
}

