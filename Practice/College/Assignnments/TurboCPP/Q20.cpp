#include<iostream.h>

void swap(int& x , int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void InsertionSort(int arr[ ] , int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] > arr[i]) {
            swap(arr[i] , arr[i - 1]);

            int j = i - 1;
            while (j > 0 && arr[j - 1] > arr[j]) {
                swap(arr[j] , arr[j - 1]);
                j--;
            }

        }
    }
}

void main( ) {
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

}