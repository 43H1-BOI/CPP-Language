#include <iostream>
using namespace std;

/*
10. Write a menu driven program to implement Dequeue
*/

class DEQUEUE {
    int f , r , cap;
    int* arr;

public:
    DEQUEUE(int size) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = -1;
        }
        f = r = -1;
        cap = size;
    }

    void Add_front( );
    void Add_rear( );
    int delete_front( );
    int delete_rear( );
    void Display( );
    ~DEQUEUE( ) {
        delete[ ] arr;
    }
};

void DEQUEUE::Add_front( ) {
    int x;
    cout << "Enter value to Insert from Front: ";
    cin >> x;

    if (f == 0) {
        int ans;
        cout << "Element cannot be added from Front!!!" << endl;
        cout << "Do you want to shift elements forward?" << endl;
        cout << "If Yes, Press 1, else 0: ";
        cin >> ans;

        if (ans) {
            if (r < cap - 1) {
                for (int i = r; i >= f; i--) {
                    arr[i + 1] = arr[i];
                }
                arr[f] = x;
                r++;
                cout << "Value Added from Front!!!" << endl;
            }
            else {
                cout << "No more Elements can be added until deletion is done!!!" << endl;
            }
        }
        else {
            cout << "Queue is Full!!!" << endl;
        }
        return;
    }

    if (f == -1) {
        f = r = 0;
    }
    else {
        f--;
    }

    arr[f] = x;
    cout << "Value Added from Front!!!" << endl;
}

void DEQUEUE::Add_rear( ) {
    int x;
    cout << "Enter value to Insert from Rear: ";
    cin >> x;

    if (r == cap - 1) {
        cout << "Queue is full!!!" << endl;
        return;
    }

    if (f == -1) {
        f = 0;
    }

    r++;
    arr[r] = x;
    cout << "Value Added from Rear!!!" << endl;
}

int DEQUEUE::delete_front( ) {
    if (f == -1) {
        cout << "Queue is Empty!!!" << endl;
        return -1;
    }

    int temp = arr[f];
    arr[f] = -1;

    if (f == r) {
        f = r = -1;
    }
    else {
        f++;
    }

    cout << "Value Deleted from Front!!!" << endl;
    return temp;
}

int DEQUEUE::delete_rear( ) {
    if (f == -1) {
        cout << "Queue is Empty!!!" << endl;
        return -1;
    }

    int temp = arr[r];
    arr[r] = -1;

    if (f == r) {
        f = r = -1;
    }
    else {
        r--;
    }

    cout << "Value Deleted from Rear!!!" << endl;
    return temp;
}

void DEQUEUE::Display( ) {
    if (f == -1) {
        cout << "Queue is Empty!!!" << endl;
        return;
    }

    for (int i = 0; i < cap; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main( ) {
    DEQUEUE ob1(10);
    int input;
    int z = 1;

    while (z != 0) {
        cout << "Press 1 to Add from Front" << endl;
        cout << "Press 2 to Add from Rear" << endl;
        cout << "Press 3 to Delete from Front" << endl;
        cout << "Press 4 to Delete from Rear" << endl;
        cout << "Press 5 to display the Queue" << endl;
        cout << "Press 6 to Exit the Program" << endl;
        cin >> input;

        switch (input) {
            case 1:
            ob1.Add_front( );
            break;
            case 2:
            ob1.Add_rear( );
            break;
            case 3:
            cout << ob1.delete_front( ) << "is deleted from Front." << endl;
            break;
            case 4:
            cout << ob1.delete_rear( ) << "is deleted from Rear." << endl;
            break;
            case 5:
            ob1.Display( );
            break;
            case 6:
            cout << "Program exited successfully!!!" << endl;
            z = 0;
            break;
            default:
            cout << "Enter a valid operation!!!" << endl;
        }

        if (z != 0) {
            cout << "If you want to continue performing operations on Queue, press 1, else 0: ";
            cin >> z;
        }
    }

    return 0;
}
