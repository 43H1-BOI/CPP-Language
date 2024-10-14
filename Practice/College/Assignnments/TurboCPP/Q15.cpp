#include<iostream>
using namespace std;

int LinearSearch(int arr[ ] , int size , int find) {
    int i = 0;
    while (i < size) {
        if (arr[i] == find)
            return i;

        i++;
    }
    return -1;
}

int main( ) {
    int find;
    int arr[ ] = { 30,11,17,22,7,20,2,16,23,4,13,12,28,24,10,8,15,21,25,26 };

    cout << "Elements in Array Are : " << endl;
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    cout << "Enter Element to Search : ";
    cin >> find;

    cout << LinearSearch(arr , 20 , find);
    return 0;
}