#include<iostream>
using namespace std;

int LinearS(int arr[ ] , int size , int find) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == find) return i;
    }
    return -1;
}


int main( ) {
    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter Elements in Array : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "\nElements in Array are : " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    int find;
    cout << "Enter Element to Search in Array :: ";
    cin >> find;

    int searchIdx = LinearS(arr , size , find);
    if (searchIdx == -1) {
        cout << " ELement Not found !";
    }
    else
        cout << "Element Found at Index " << searchIdx << endl;

    delete[ ]arr;
    arr = nullptr;


    return 0;
}