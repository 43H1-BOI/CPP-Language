#include <iostream>
using namespace std;

// Function to Input Values inside an Array
void getArr(int* arr , int size){
    for (int i = 0; i < size; i++){
        // cout << "Enter Element " << (i + 1) << " : ";
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

// Function to Delete any element from Array
void deleteEle(int* arr , int& size , int index){
    for (int i = index; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;
}

int main( ){
    int s; // Size of Array
    cout << "Enter size of Array : ";
    cin >> s;

    // To Allocate Memory Dynamically to the array of any size
    int* arr = new int[s];
    /*
        In the Above step , we have created a pointer "arr" which points to the array of "s" size
        This process is known as Dynamic Memory Allocation.
        During this process , we allocate memory in the heap and that memory must be cleared manually ,
        if it's not done manually then the memory will remains allocated to the array or Object
    */

    // Functions to Set and Get Values of Array
    cout << "Enter Elements in Array : ";
    getArr(arr , s);
    printArr(arr , s);


    // Delete Element from Array 
    // deleteEle(array , size , index );
    deleteEle(arr , s , 1);

    cout << "After Deleting Element from Array : ";
    printArr(arr , s);

    // To Free up Dynamically allocated memory from Heap
    delete[ ] arr;
    arr = nullptr;

    return 0;
}