#include <iostream>

using namespace std;

int main() {
    const int ROWS = 2;
    const int COLS = 4;
    const int DEPTH = 3;

    int arr[ROWS][COLS][DEPTH];
    int sum = 0;

    // Initialize the array with user input values
    cout << "Enter " << ROWS * COLS * DEPTH << " values for the array:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < DEPTH; k++) {
                cin >> arr[i][j][k]; // Get user input for each element
                sum += arr[i][j][k]; // Add each value to the sum
            }
        }
    }

    // Calculate the average
    double average = (double)sum / (ROWS * COLS * DEPTH);

    // Display the array and average
    cout << "The values in the array are:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < DEPTH; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "The average value in the array is: " << average << endl;

    return 0;
}
