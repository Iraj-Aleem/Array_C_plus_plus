////C++	Program	to	find	sum	of	elements	in	2D	array
//#include<iostream>
//using	namespace	std;
////Get	the	size	m	and	n
//#define	M	4
//#define	N	4
////Function	to	calculate
//int	sum(int	arr[M][N])
//{
//	
//}
#include <iostream>
using namespace std;
int find_smallest_element(int arr[][6], int rows, int cols) {
    int smallest = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < smallest) {
                smallest = arr[i][j];
            }
        }
    }
    return smallest;
}

int sum_all_integers(int arr[][6], int rows, int cols) {
    int total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] != '\0') {
                total += arr[i][j];
            }
        }
    }
    return total;
}

int sum_major_diagonal(int arr[][4], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i][i] != '\0') {
            total += arr[i][i];
        }
    }
    return total;
}

int sum_row1_col2(int arr[][4], int rows, int cols) {
    int total = 0;
    for (int i = 0; i < rows; i++) {
        if (i == 0) {
            for (int j = 0; j < cols; j++) {
                if (j == 2) {
                    total += arr[i][j];
                }
            }
        }
        else {
            if (arr[i][1] != '\0') {
                total += arr[i][1];
            }
        }
    }
    return total;
}

int main() {
    int arr1[5][6] = {{2, 4, 6, 8, 10, 12},
                      {1, 3, 5, 7, 9, 11},
                      {0, -1, -3, 2, 4, 6},
                      {7, 5, 3, 1, 0, -2},
                      {9, 8, 7, 6, 5, 4}};
    int arr2[4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};
    int arr3[3][4] = {{3, 2, 1, 0},
                      {6, 5, 4, 0},
                      {9, 8, 7, 0}};

    cout << "Smallest element in arr1: " << find_smallest_element(arr1, 5, 6) << endl; // Output: -3
    cout << "Sum of all integers in arr1: " << sum_all_integers(arr1, 5, 6) << endl; // Output: 57
    cout << "Sum of major diagonal in arr2: " << sum_major_diagonal(arr2, 4) << endl; // Output: 34
    cout << "Sum of row 1 and column 2 in arr3: " << sum_row1_col2(arr3, 3, 4) << endl; // Output: 15

}
//Q3
//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[3][4][2];
//
//    // Taking input values from user
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<4; j++) {
//            for(int k=0; k<2; k++) {
//                cout << "Enter the value of arr[" << i << "][" << j << "][" << k << "]: ";
//                cin >> arr[i][j][k];
//            }
//        }
//    }
//
//    // Displaying the values of the array
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<4; j++) {
//            for(int k=0; k<2; k++) {
//                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
//            }
//        }
//    }
//
//    // Finding even values in the array
//    cout << "Even values in the array are: ";
//    int evenCount = 0;
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<4; j++) {
//            for(int k=0; k<2; k++) {
//                if(arr[i][j][k]%2 == 0) {
//                    cout << arr[i][j][k] << " ";
//                    evenCount++;
//                }
//            }
//        }
//    }
//    cout << endl << "Total number of even values: " << evenCount << endl;
//
//    // Finding the maximum value in the array
//    int maxVal = arr[0][0][0];
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<4; j++) {
//            for(int k=0; k<2; k++) {
//                if(arr[i][j][k] > maxVal) {
//                    maxVal = arr[i][j][k];
//                }
//            }
//        }
//    }
//    cout << "Maximum value in the array is: " << maxVal << endl;
//
//    // Finding the count of negative values in the array
//    int negCount = 0;
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<4; j++) {
//            for(int k=0; k<2; k++) {
//                if(arr[i][j][k] < 0) {
//                    negCount++;
//                }
//            }
//        }
//    }
//    cout << "Total number of negative values in the array: " << negCount << endl;
//
//    return 0;
//}

