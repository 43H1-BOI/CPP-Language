#include<iostream>
using namespace std;

int main( ){
    int size;
    cin >> size;

    // To Get Elements in Array
    int arr[size];
    cout << "enter Elements in array : " << endl;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }


    // 6 8 9 3 1 2 7 0
    // 


    // Bubble Sort
    int counter = 1;
    while (counter < size){
        for (int i = 0; i < size - counter; i++){
            if (arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    // To Print Elements from Array
    for (int i = 0; i < size; i++){
        cout << arr[i] << "  ";
    } cout << endl;

    return 0;
}