// Program 3: Print ASCII value of all characters
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 256; i++) {
        cout << i << ": " << char(i) << endl;
    }
    return 0;
}

