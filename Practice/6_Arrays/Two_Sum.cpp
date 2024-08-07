#include<iostream>
using namespace std;

// Function to Input Values inside an Array
void getArr(int* arr , int size){
    for (int i = 0; i < size; i++){
        cout << "Enter Element " << (i + 1) << " : ";
        cin >> arr[i];
    }
}

// Function to Print Values of Array
void printArr(int* arr , int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
        // cout << "Element " << (i + 1) << " : " << arr[i] << endl;
    }
    cout << endl;
}

// Function to get Target Sum Value
void targetSum(int* arr , int size , int targetSum){
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++){
            if (arr[i] + arr[j] == targetSum){
                cout << "(" << arr[i] << " , " << arr[j] << ")" << endl;
            }
        }
    }
}

int main( ){
    int size , target;
    cout << "Enter Size of Array : ";
    cin >> size;

    int* arr = new int[size];

    // Functions to Set and Get Values of Array
    getArr(arr , size);
    printArr(arr , size);

    cout << "Enter Value of Target Sum : ";
    cin >> target;

    cout << endl;

    targetSum(arr , size , target);


    // To Free up Dynamically allocated memory from Heap
    delete[ ] arr;
    arr = nullptr;
    return 0;
}