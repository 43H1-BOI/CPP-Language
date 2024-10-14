#include<iostream>
using namespace std;

int BinarySearch(int arr[ ] , int first , int last , int find) {
    if (first > last) {
        cout << " != " << endl;
        return -1;
    }

    cout << "recc call" << endl;
    int mid = (first + last) / 2;
    int index;

    cout << "first = " << first << " ";
    cout << "mid = " << mid << " ";
    cout << "last = " << last << " ";
    cout << endl;

    if (arr[mid] == find) {
        cout << " = " << endl;
        return mid;
    }
    else if (arr[mid] < find) {
        cout << " + " << endl;
        index = BinarySearch(arr , mid + 1 , last , find);
    }
    else if (arr[mid] > find) {
        cout << " - " << endl;
        index = BinarySearch(arr , first , mid - 1 , find);
    }
    else { // this one is not running
        return -1;
    }

    cout << "returned : " << index;
    return index;
}

int main( ) {
    int find;
    int arr[ ] = { 1,3,4,6,8,9,11,15,20,22,28,31,33,35,38,40,43,46,49,50 };

    cout << "Elements in Array Are : " << endl;
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    for (int i = 0; i < 20; i++)
        cout << i << " ";
    cout << endl;


    cout << "Enter Element to Search : ";
    cin >> find;

    cout << BinarySearch(arr , 0 , 20 , find);
    return 0;
}