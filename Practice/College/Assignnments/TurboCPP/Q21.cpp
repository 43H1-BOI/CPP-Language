#include<iostream>
using namespace std;

int main( ) {

    // int* arr1 = new int[10];
    int arr1[ ] = { 1,3,4,6,8,9,11,15,20,22 };
    int arr2[ ] = { 1,2,5,7,10,11,12,14,21,25 };
    int newArr[20];
    int n = 0;

    for (int i = 0 , j = 0; i < 10; i++ , j++) {
        if (arr1[i] < arr2[j]) {
            newArr[n++] = arr1[i];
            newArr[n++] = arr2[j];
        }
        else {
            newArr[n++] = arr2[i];
            newArr[n++] = arr1[j];
        }
    }

    for (int nnn : newArr)
        cout << nnn << " ";


    // int* arr2 = new int[10];

    // for(int i = 0 ; i < 10 ; i++)
    //     cin >> arr1[i];

    return 0;
}