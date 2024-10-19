#include<iostream>
using namespace std;

int BinarySearchRec(int arr[ ] , int start , int end , int ele) {
    if (start > end) {
        return -1;
    }

    int mid = (start + end) / 2;
    int index;

    if (arr[mid] == ele) {
        return mid;
    }
    else if (arr[mid] > ele) {
        index = BinarySea(arr , start , mid - 1 , ele);
    }
    else if (arr[mid] < ele) {
        index = BinarySea(arr , mid + 1 , end , ele);
    }

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