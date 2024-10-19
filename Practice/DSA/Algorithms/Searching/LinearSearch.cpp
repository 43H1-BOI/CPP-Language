#include<iostream>
using namespace std;

int LinearSearch(int arr[ ] , int size , int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main( ) {
    int size , element;
    cout << "Enter Size of Array : ";
    cin >> size;

    // To Get Elements in Array
    int arr[size];
    cout << "Enter Elements in array : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter Element to Search : ";
    cin >> element;

    int index = LinearSearch(arr , size , element);

    if (index != -1) {
        cout << "Element Found at " << index << " Position." << endl;
    }
    else {
        cout << "Element Not Found !" << endl;
    }

    return 0;
}

/*
int main( ) {

    int arr[10] = { 2,5,1,22,13,75,23,11,20,0 };
    cout << LinearSearch(arr , 10 , 50);

    return 0;
}
*/