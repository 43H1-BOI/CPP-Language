#include<iostream>
using namespace std;

void swap(int& x , int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void SelectionSort(int arr[ ] , int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (arr[i] != arr[min]) { // swap
            swap(arr[min] , arr[i]);
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

    // Find smallest Element from unsorted pat of an array and put it in the Beginning of unsorted part
    SelectionSort(arr , size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    } cout << endl;

    return 0;
}

/*
// Selection Sort Basic Dry-Run
    // 4 9 8 7 2 1
    // 1 9 8 7 4 2

    // 1 - 9 8 7 4 2
    // 1 - 8 9 7 4 2
    // 1 - 7 9 8 4 2
    // 1 - 4 9 8 7 2
    // 1 - 2 9 8 7 4

    // 1 2 - 9 8 7 4
    // 1 2 - 8 9 7 4
    // 1 2 - 7 9 8 4
    // 1 2 - 4 9 8 7

    // 1 2 4 - 9 8 7
    // 1 2 4 - 8 9 7
    // 1 2 4 - 7 9 8

    // 1 2 4 7 - 8 9








    // Selection Sort with Minimum Swaps
    for (int i = 0; i < size - 1; i++){
        int min_index = i;
        for (int j = i + 1; j < size; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        if (arr[min_index] < arr[i]){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

//Selection Sort With Minimum Swaps

    // 4 9 8 7 2 1
    // 4 9 8 7 2 1  size = 6
    // min_index = 0 ; min_ele = 4
    // j = 1 ; if( 9 < 4 ) X
    // j = 2 ; if( 8 < 4 ) X
    // j = 3 ; if( 7 < 4 ) X
    // j = 4 ; if( 2 < 4 ) { min_index = 4 }  min_ele = 2
    // j = 5 ; if( 1 < 4 ) { min_index = 5 }  min_ele = 1

    // if ( arr[5] < arr[0] ) ( 1 < 4 ){
    // arr[0] = 1;
    // arr[5] = 4;
    // }


    // 1 9 8 7 2 4

    // 1 9 8 7 2 4  size = 6
    // min_index = 1 ;  min_ele = 9
    // j = 2 ; if( 8 < 9 ) { min_index = 2 } min_ele = 8
    // j = 3 ; if( 7 < 8 ) { min_index = 3 } min_ele = 7
    // j = 3 ; if( 2 < 8 ) { min_index = 4 } min_ele = 2
    // j = 3 ; if( 4 < 8 ) { min_index = 5 } min_ele = 4

    // if ( arr[5] < arr[1] ) ( 4 < 9 ){
    // arr[1] = 4;
    // arr[5] = 9;
    // }


    // 1 4 8 7 2 9


*/