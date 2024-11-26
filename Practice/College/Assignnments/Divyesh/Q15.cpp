#include<iostream>
using namespace std;

/*
15. Write a program to implement linear Search.
*/

class Lin_search {
    int array[10] = { 10,100,200,300,400,500,600,700,800,900 };
public:
    void linear_search( );
};

void Lin_search::linear_search( ) {
    int key;
    cout << "Enter element you want to search: ";
    cin >> key;
    for (int i = 0; i < 10; i++) {
        if (array[i] == key) {
            cout << "Element Found at index " << i << "!!! :)" << endl;
            break;
        }
        if (i == 9 & array[i] != key) {
            cout << "Element not found!!! :(" << endl;
        }
    }
}

int main( ) {
    Lin_search ob1;
    ob1.linear_search( );
    return 0;
}