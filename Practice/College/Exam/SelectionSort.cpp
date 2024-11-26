#include<iostream>
using namespace std;

void swap(int*& x , int*& y) {
    int temp = x;
    x = y;
    y = temp;
}

void SelectionS(int arr[ ] , int size) {
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {

                // swap(arr[i] , arr[j]);
            }
        }
    }
}