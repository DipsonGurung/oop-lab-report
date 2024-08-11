#include <iostream>

using namespace std;

int main() {
    float marks[5];
    float totalMarks = 0;
    float percentage;
    const int numSubjects = 5;
    const int maxMarksPerSubject = 100; // Assuming each subject is out of 100 marks

    // Prompt the user to enter marks for five subjects
    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];
        // Validate marks input
        if (marks[i] < 0 || marks[i] > maxMarksPerSubject) {
            cout << "Invalid marks entered. Please enter a value between 0 and " << maxMarksPerSubject << "." << endl;
            --i; // Decrement i to repeat input for this subject
            continue;
        }
        totalMarks += marks[i];
    }

    // Calculate percentage
    percentage = (totalMarks / (numSubjects * maxMarksPerSubject)) * 100;

    // Output the results
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}

