#include <iostream>

using namespace std;

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Prompt the user to enter time in seconds
    cout << "Enter time in seconds: ";
    cin >> totalSeconds;

    // Convert total seconds into hours, minutes, and seconds
    hours = totalSeconds / 3600; // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // 1 minute = 60 seconds
    seconds = totalSeconds % 60; // Remaining seconds

    // Output the result
    cout << "Time is: " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;

    return 0;
}

