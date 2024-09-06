//Q5
#include <iostream>
#include <fstream>
using namespace std;

class Item {
public:
    int code;
    float price;

    // Function to input item details
    void input() {
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter item price: ";
        cin >> price;
    }
};

int main() {
    Item items[5];

    // Input details of 5 items
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for item " << i + 1 << ":" << endl;
        items[i].input();
    }

    // Write items to file "item.dat"
    ofstream outFile("item.dat, ios::binary");
    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    outFile.write(reinterpret_cast<char*>(items), sizeof(items));
    outFile.close();

    cout << "Item records written to item.dat successfully." << endl;

    return 0;
}

