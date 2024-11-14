#include<iostream>
using namespace std;

int BinarySearch(int arr[ ] , int size , int find) {
    int f = 0 , l = size - 1 , m;
    m = size / 2;

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

int main( ) {
    int size;
    cin >> size;
    int* arr = new int[size];
    cout << "Enter Elements in Array : " << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];


    cout << "Elements in Array Are : " << endl;
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    cout << "Enter Element to Search : ";
    cin >> find;

    cout << BinarySearch(arr , 20 , find);
    return 0;
}