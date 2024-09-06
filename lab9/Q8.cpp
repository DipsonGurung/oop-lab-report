//Q8
#include <iostream>
#include <fstream>
using namespace std;

class Item {
public:
    int code;
    float price;
};

int main() {
    ifstream inFile("item.dat", ios::binary);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Calculate the number of objects
    inFile.seekg(0, ios::end);
    int fileSize = inFile.tellg();
    int objectCount = fileSize / sizeof(Item);

    cout << "Number of objects in the file: " << objectCount << endl;

    inFile.close();
    return 0;
}

