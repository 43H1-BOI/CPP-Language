#include<iostream>
using namespace std;

void swap(int& x , int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void InsertionSort(int arr[ ] , int size) {
    for (int i = 1; i < size; i++) {
        cout << "Main iteration = " << i << endl;
        if (arr[i - 1] > arr[i]) {
            cout << arr[i - 1] << " " << arr[i] << endl;
            // swap(arr[i] , arr[i - 1]);
            { // swapping
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
            cout << endl;

            int j = i - 1;
            while (j > 0) {
                cout << "Sub iteration = " << j << endl;
                if (arr[j - 1] > arr[j]) {
                    cout << arr[j - 1] << " " << arr[j] << endl;
                            // swap(arr[j] , arr[j - 1]);
                    { // swapping
                        int temp = arr[j];
                        arr[j] = arr[j - 1];
                        arr[j - 1] = temp;
                    }
                }
                else break;
                j--;
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

    // 
    InsertionSort(arr , size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    } cout << endl;

    return 0;
}