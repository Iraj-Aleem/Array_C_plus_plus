#include <iostream>
using namespace std;

int main() {
    int arr[3][4][2];

    // Taking input values from user
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            for(int k=0; k<2; k++) {
                cout << "Enter the value of arr[" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Displaying the values of the array
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            for(int k=0; k<2; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    // Finding even values in the array
    cout << "Even values in the array are: ";
    int evenCount = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            for(int k=0; k<2; k++) {
                if(arr[i][j][k]%2 == 0) {
                    cout << arr[i][j][k] << " ";
                    evenCount++;
                }
            }
        }
    }
    cout << endl << "Total number of even values: " << evenCount << endl;

    // Finding the maximum value in the array
    int maxVal = arr[0][0][0];
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            for(int k=0; k<2; k++) {
                if(arr[i][j][k] > maxVal) {
                    maxVal = arr[i][j][k];
                }
            }
        }
    }
    cout << "Maximum value in the array is: " << maxVal << endl;

    // Finding the count of negative values in the array
    int negCount = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            for(int k=0; k<2; k++) {
                if(arr[i][j][k] < 0) {
                    negCount++;
                }
            }
        }
    }
    cout << "Total number of negative values in the array: " << negCount << endl;

    return 0;
}
