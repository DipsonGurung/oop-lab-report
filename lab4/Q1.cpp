#include <iostream>
using namespace std;

int main() {
    int arr[30];
    
    for (int i = 0; i < 30; i++) {
        arr[i] = (i % 2 == 0) ? (i + 1) : -(i + 1);
    }

    for (int i = 0; i < 30; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}

