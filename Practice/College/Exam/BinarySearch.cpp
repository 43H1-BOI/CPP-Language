#include<iostream>
using namespace std;

int BSN(int arr[ ] , int size , int find) { // Without Reccursion Version {Normal Version}
    int f = 0;
    int l = size - 1;

    do {
        int mid = (f + l) / 2;

        if (arr[mid] == find)
            return mid;

        else if (arr[mid] < find)
            f = mid + 1;

        else if (arr[mid] > find)
            l = mid - 1;

    } while (l >= f);
    return -1;
}

int BSR(int f , int l , int find , int arr[ ]) { // Recurssion Version
    if (l < f) return -1;

    int searchIdx;
    int m = (f + l) / 2;

    if (arr[m] == find) {
        return m;
    }
    else if (arr[m] > find) {
        searchIdx = BSR(f , m - 1 , find , arr);
    }
    else if (arr[m] < find) {
        searchIdx = BSR(m + 1 , l , find , arr);
    }

    return searchIdx;
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

    // int searchIdx = BSN(arr , size , find);
    int searchIdx = BSR(0 , size - 1 , find , arr);
    if (searchIdx == -1) {
        cout << "Element Not found !";
    }
    else
        cout << "Element Found at Index " << searchIdx << endl;

    delete[ ]arr;
    arr = nullptr;


    return 0;
}