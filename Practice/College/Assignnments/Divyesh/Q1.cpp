#include <iostream>
using namespace std;

/*
1. Write a menu driven program to implement following operations on array :
a. Create an array
b. Insert an element
c. Delete an element
d. Search an element
e. Find maximum element
f. Find minimum element
*/

class Arrays
{
    int size;
    int* arr;
public:
    void create_array( );
    void insert_element( );
    void delete_element( );
    void search_element( );
    int max_element( );
    int min_element( );
    void display_array( );
};

void Arrays::create_array( ) {
    int x;
    cout << "Enter the size of your Array: " << endl;
    cin >> x;
    size = x;
    arr = new int[size];
    for (int i = 0; i < x; i++) {
        arr[i] = 0;
    }
    cout << "Your Array of size " << x << " is created and initialised to 0." << endl;
}

void Arrays::insert_element( ) {
    cout << "Enter " << size << " values in your Array." << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void Arrays::delete_element( ) {
    int x;
    cout << "Enter the element you want to delete: " << endl;
    cin >> x;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            cout << arr[i] << " is deleted!!!" << endl;
            arr[i] = 0;
            return;
        }
    }
    cout << "Element not found!!!" << endl;
}

void Arrays::search_element( ) {
    int x;
    cout << "Enter element you want to search: ";
    cin >> x;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found!!!" << endl;
}

int Arrays::min_element( ) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int Arrays::max_element( ) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void Arrays::display_array( ) {
    cout << "Your Array is: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " << endl;
    }
}

int main( ) {
    Arrays ob1;
    int input;
    int z;
    z = 1;
    while (z == 1) {
        cout << "Press 1 to Create an Array" << endl;
        cout << "Press 2 to Insert an Element in Array" << endl;
        cout << "Press 3 to Delete an Element in Array" << endl;
        cout << "Press 4 to Search an Element in Array" << endl;
        cout << "Press 5 to Find Maximum value in an Array" << endl;
        cout << "Press 6 to Find Minimum value in an Array" << endl;
        cout << "Press 7 to Display the Array" << endl;
        cout << "Press 8 to Exit the Program" << endl;
        cin >> input;

        switch (input) {
            case 1:
            {
                ob1.create_array( );
                break;
            }
            case 2:
            {
                ob1.insert_element( );
                break;
            }
            case 3:
            {
                ob1.delete_element( );
                break;
            }
            case 4:
            {
                ob1.search_element( );
                break;
            }
            case 5:
            {
                int y = ob1.max_element( );
                cout << y << " is the Maximum value in the Array!!!" << endl;
                break;
            }
            case 6:
            {
                int y = ob1.min_element( );
                cout << y << " is the Minimum value in the Array!!!" << endl;
                break;
            }
            case 7:
            {
                ob1.display_array( );
                break;
            }
            case 8: {
                cout << "Program exited successfully!!!" << endl;
                break;
            }
            default: {
                cout << "Enter a valid operation!!!" << endl;
            }
        }
        cout << "if you want to continue press 1, else 0" << endl;
        cin >> z;
        if (z != 1) {
            cout << "Program exited successfully!!!" << endl;
        }
    }
    return 0;
}