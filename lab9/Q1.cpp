//lab9 Q1
#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int eid;
    char name[50];
    float salary;
};

int main() {
    Employee employees[10];

    // Reading employee details from the keyboard
    for (int i = 0; i < 10; i++) {
        cout << "Enter Employee ID: ";
        cin >> employees[i].eid;
        cout << "Enter Employee Name: ";
        cin.ignore(); // To ignore the newline character left by previous input
        cin.getline(employees[i].name, 50);
        cout << "Enter Employee Salary: ";
        cin >> employees[i].salary;
    }

    // Writing employee details to the file "emp.doc"
    ofstream outFile("emp.doc");
    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        outFile << "Employee ID: " << employees[i].eid << endl;
        outFile << "Employee Name: " << employees[i].name << endl;
        outFile << "Employee Salary: " << employees[i].salary << endl;
        outFile << "--------------------------" << endl;
    }

    outFile.close();
    cout << "Employee details written to emp.doc successfully." << endl;

    return 0;
}

