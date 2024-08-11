// Program 5: Class Number with three instance variables, getMax() function
#include <iostream>
using namespace std;

class Number {
    int x, y, z;
public:
    Number(int a, int b, int c) : x(a), y(b), z(c) {}
    int getMax() {
        return max(max(x, y), z);
    }
};

int main() {
    Number num(10, 20, 15);
    cout << "Largest number: " << num.getMax() << endl;
    return 0;
}

