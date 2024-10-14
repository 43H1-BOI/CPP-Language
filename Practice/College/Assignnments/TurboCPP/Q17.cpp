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
    int find;
    int arr[ ] = { 1,3,4,6,8,9,11,15,20,22,28,31,33,35,38,40,43,46,49,50 };

    cout << "Elements in Array Are : " << endl;
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    cout << "Enter Element to Search : ";
    cin >> find;

    cout << BinarySearch(arr , 20 , find);
    return 0;
}