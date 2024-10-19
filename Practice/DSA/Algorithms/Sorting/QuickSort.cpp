#include<iostream>
using namespace std;

void swap(int& x , int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void QuickSort(int arr[ ] , int start , int end) {
    if (start >= end) { // Base Case
        return;
    }

    int pIndex = start; // correct index of pivotElement
    int pivotElement = arr[end]; // element to be placed on correct position

    for (int i = start; i < end; i++) {
        if (arr[i] < pivotElement) {
            swap(arr[i] , arr[pIndex]);
            pIndex++;
        }
    }

    // swapping elemnt at pIndex with pivotElement
    swap(arr[pIndex] , arr[end]);

    // 1st SubArray
    QuickSort(arr , start , pIndex - 1);

    // 2nd SubArray
    QuickSort(arr , pIndex + 1 , end);

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

    // Divide and Conquor Algo , Recursive Function 
    QuickSort(arr , 0 , size - 1);
    /*
    Quick  Sort :- Divide And Conquor Algo
        1. Select a Pivot Element
        2. Place the Pivot Element at Correct Position
        3. Recursively Follow above steps to place each element at it's correct position
    */

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    } cout << endl;

    return 0;
}