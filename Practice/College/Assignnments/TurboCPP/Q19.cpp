#include<iostream.h>

void SelectionSort(int arr[ ] , int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (i != min) { // swap
            swap(arr[min] , arr[i]);
        }
    }
}


void getArr(int arr[ ] , int size) {
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

void display(int arr[ ] , int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swap(int& x , int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void main( ) {
    int size;
    cin >> size;

    // To Get Elements in Array
    int* arr = new int[size];
    cout << "enter Elements in array : " << endl;
    getArr(arr , size);

    cout << "Array Before Sorting : " << endl;
    display(arr , size);

    SelectionSort(arr , size);
    cout << "Array After Sorting : " << endl;
    display(arr , size);
    // Find smallest Element from unsorted pat of an array and put it in the Beginning of unsorted part
}