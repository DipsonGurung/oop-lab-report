// Program 6: Class Swapper with swap() function
#include <iostream>
using namespace std;

class Swapper {
    int x, y;
public:
    Swapper(int a, int b) : x(a), y(b) {}
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    void swap() {
        int temp = x;
        x = y;
        y = temp;
    }
};

int main() {
    Swapper sw(10, 20);
    cout << "Before swap: x = " << sw.getX() << ", y = " << sw.getY() << endl;
    sw.swap();
    cout << "After swap: x = " << sw.getX() << ", y = " << sw.getY() << endl;
    return 0;
}

