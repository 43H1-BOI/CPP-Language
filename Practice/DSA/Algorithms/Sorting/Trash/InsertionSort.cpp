#include<iostream>
using namespace std;

void swap(int& x , int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void InsertionSort(int arr[ ] , int size) {
    for (int i = 1; i < size; i++) {
        cout << "Iteration : i = " << i << endl;
        if (arr[i - 1] > arr[i]) {
            swap(arr[i] , arr[i - 1]);
            cout << arr[i - 1] << " <-> " << arr[i] << endl;


            for (int i = 0; i < size; i++) {
                cout << arr[i] << "  ";
            } cout << endl;


            int j = i - 1;
            cout << "j = " << j << endl;
            while (j > 0 && arr[j - 1] > arr[j]) {
                cout << arr[j - 1] << " <-> " << arr[j] << endl;
                swap(arr[j] , arr[j - 1]);
                j--;


                for (int i = 0; i < size; i++) {
                    cout << arr[i] << "  ";
                } cout << endl;

            }
            cout << endl << endl;

        }

        for (int i = 0; i < size; i++) {
            cout << arr[i] << "  ";
        } cout << endl;

    }
}

/*
void InsertionSort(int arr[ ] , int size) {
    for (int i = 1; i < size; i++) {
        cout << "Iteration : i = " << i << endl;
        int j = i - 1;
        cout << "j = " << j << endl;
        while (j > 0 && arr[j - 1] > arr[j]) {
            cout << arr[j - 1] << " <-> " << arr[j] << endl;
            swap(arr[j - 1] , arr[j]);
            j--;
        }
        cout << endl << endl;
    }
}
*/


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