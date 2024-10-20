#include<iostream>
using namespace std;

void swap(int& x , int& y) {
    int temp = x;
    x = y;
    y = temp;
}

// void BubbleSort(int arr[ ] , int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if (arr[i] > arr[j]) {
//                 swap(arr[i] , arr[j]);
//             }
//         }
//     }
// }

void BubbleSort(int arr[ ] , int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j] , arr[j + 1]);
            }
        }
    }
}


int main( ) {
    int size;
    cin >> size;

    // To Get Elements in Array
    int arr[size];
    cout << "enter Elements in array : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Iteratively inserting each element of an unsorted array into its correct position in the sorted portion
    InsertionSort(arr , size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    } cout << endl;

    return 0;
}

// 50 10 30 80 0
// i
// j

// 10 50 30 80 0
// i
//    j

// 10 30 50 80 0   
// i
//        j

// 10 30 50 0 80   
// i
//          j



// 10 30 50 0 80    
//    i
//    j

// 10 30 50 0 80    
//    i
//        j

// 10 30 50 0 80   
//    i
//          j
