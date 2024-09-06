//Q7
#include <iostream>
#include <fstream>
using namespace std;

class Item {
public:
    int code;
    float price;

    // Function to display item details
    void display() {
        cout << "Item Code: " << code << ", Price: " << price << endl;
    }
};

int main() {
    Item item;
    ifstream inFile("item.dat", ios::binary);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Read and display 1st, 3rd, and 5th records
    int recordPositions[] = {0, 2, 4};
    for (int i = 0; i < 3; i++) {
        inFile.seekg(recordPositions[i] * sizeof(Item), ios::beg);
        inFile.read(reinterpret_cast<char*>(&item), sizeof(Item));
        cout << recordPositions[i] + 1 << "rd Record: ";
        item.display();
    }

    inFile.close();
    return 0;
}

