#include<iostream>
using namespace std;

void swap(int& x , int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void SelectionSort(int arr[ ] , int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[min_index] > arr[j]) {
                min_index = j;
            }
        }

        // swapping min element with i-th element
        if (i != min_index)
            swap(arr[min_index] , arr[i]);

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

    // Find smallest Element from unsorted pat of an array and put it in the Beginning of unsorted part
    SelectionSort(arr , size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    } cout << endl;

    return 0;
}