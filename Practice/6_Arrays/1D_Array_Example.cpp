#include<iostream>
using namespace std;

int main( ){
    int  n;
    cout << "Enter Size of Array : ";
    cin >> n;

    int list[n];

    cout << endl;

    cout << "Enter " << n << " Numbers One-By-One : " << endl;
    for (int i = 0; i < n; i++){
        cout << "Element " << (i + 1) << " : ";
        cin >> list[i];
    }
    cout << endl;

    cout << "Elements in the array are :\n";
    for (int i = 0; i < n; i++){
        printf("%d \t" , list[i]);
    }
    return 0;
}