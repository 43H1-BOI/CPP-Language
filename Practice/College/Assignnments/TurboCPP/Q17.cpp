#include<iostream>
using namespace std;

int BinarySearch(int arr[ ] , int size , int find) {
    int f = 0 , l = size - 1 , m;
    // m = size / 2; Useless Line

    while (f <= l) {
        m = (f + l) / 2;

        if (find == arr[m]) {
            return m;
        }
        else if (find < arr[m]) {
            l = m - 1;
        }
        else if (find > arr[m]) {
            f = m + 1;
        }
    }
    return -1;
}

void getArr(int arr[ ] , int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void display(int arr[ ] , int size) {
    // for (auto i : arr) {
    // 	cout << i << "  ";
    // }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}


int main( ) {
    int size , find;
    cin >> size;
    int* arr = new int[size];
    cout << "Enter Elements in Array : " << endl;
    getArr(arr , size);

    cout << "Elements in Array Are : " << endl;
    display(arr , size);

    cout << "Enter Element to Search : ";
    cin >> find;

    cout << BinarySearch(arr , 20 , find);
    return 0;
}