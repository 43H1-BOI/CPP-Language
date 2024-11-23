#include <iostream.h>
#include <conio.h>

// Function to merge two sorted arrays
void mergeSortedArrays(int arr1[ ] , int size1 , int arr2[ ] , int size2 , int mergedArray[ ]) {
    int i = 0 , j = 0 , k = 0;

    // Merge elements from both arrays
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        }
        else {
            mergedArray[k++] = arr2[j++];
        }
    }

    // Add remaining elements from arr1
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    // Add remaining elements from arr2
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
}

void main( ) {
    clrscr( ); // Clear screen for Turbo C++

    int size1 , size2;

    // Input size and elements of the first array
    cout << "Enter the size of the first sorted array: ";
    cin >> size1;
    int arr1[100]; // Fixed-size array for Turbo C++
    cout << "Enter the elements of the first sorted array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    // Input size and elements of the second array
    cout << "Enter the size of the second sorted array: ";
    cin >> size2;
    int arr2[100]; // Fixed-size array for Turbo C++
    cout << "Enter the elements of the second sorted array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Array to store the merged result
    int mergedArray[200]; // Maximum size = size1 + size2

    // Merge the arrays
    mergeSortedArrays(arr1 , size1 , arr2 , size2 , mergedArray);

    // Output the merged array
    cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedArray[i] << " ";
    }

    getch( ); // Wait for user input before closing the program
}


/*
#include <iostream>
using namespace std;

// Function to merge two sorted arrays
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements from both arrays
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    // Add remaining elements from arr1
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    // Add remaining elements from arr2
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
}

int main() {
    int size1, size2;

    // Input size and elements of the first array
    cout << "Enter the size of the first sorted array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter the elements of the first sorted array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    // Input size and elements of the second array
    cout << "Enter the size of the second sorted array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter the elements of the second sorted array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Array to store the merged result
    int mergedArray[size1 + size2];

    // Merge the arrays
    mergeSortedArrays(arr1, size1, arr2, size2, mergedArray);

    // Output the merged array
    cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedArray[i] << " ";
    }

    return 0;
}
*/

// My Code , will update later 
// #include<iostream>
// using namespace std;

// int main( ) {

//     // int* arr1 = new int[10];
//     int arr1[ ] = { 1,3,4,6,8,9,11,15,20,22 };
//     int arr2[ ] = { 1,2,5,7,10,11,12,14,21,25 };
//     int newArr[20];
//     int n = 0;

//     for (int i = 0 , j = 0; i < 10; i++ , j++) {
//         if (arr1[i] < arr2[j]) {
//             newArr[n++] = arr1[i];
//             newArr[n++] = arr2[j];
//         }
//         else {
//             newArr[n++] = arr2[i];
//             newArr[n++] = arr1[j];
//         }
//     }

//     for (int nnn : newArr)
//         cout << nnn << " ";


//     // int* arr2 = new int[10];

//     // for(int i = 0 ; i < 10 ; i++)
//     //     cin >> arr1[i];

//     return 0;
// }