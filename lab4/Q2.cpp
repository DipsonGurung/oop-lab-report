// Program 2: Create two integer arrays and merge them into a new array
#include <iostream>
using namespace std;

int main() {
    int data1[] = {1, 2, 3};
    int data2[] = {4, 5, 6, 7};
    int len1 = sizeof(data1) / sizeof(data1[0]);
    int len2 = sizeof(data2) / sizeof(data2[0]);
    int data3[len1 + len2];

    for (int i = 0; i < len1; i++) {
        data3[i] = data1[i];
    }
    for (int i = 0; i < len2; i++) {
        data3[len1 + i] = data2[i];
    }

    for (int i = 0; i < len1 + len2; i++) {
        cout << data3[i] << " ";
    }
    cout << endl;
    return 0;
}

