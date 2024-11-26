#include <iostream>
using namespace std;

/*
8. Write a menu driven program to implement Circular queue.
*/

class Queue {
    int f , r , size , * arr;

public:
    Queue(int s) {
        f = r = -1;
        size = s;
        arr = new int[s];
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    void Add_val( );
    int Delete_val( );
    void Display( );
};

void Queue::Add_val( ) {
    int z = 1;
    while (z != 0) {
        if (z == 1) {
            int v;
            cout << "Enter the value you want to Enter: ";
            cin >> v;

            if ((f == 0 && r == size - 1) || ((r + 1) % size == f)) {
                cout << "Queue is Full" << endl;
                return;
            }

            else if (f == -1) {
                f = r = 0;
                arr[r] = v;
            }

            else {
                r = (r + 1) % size;
                arr[r] = v;
            }
        }
        else {
            cout << "Enter either 0 or 1" << endl;
        }
        cout << "Do you want to add more values? If yes, press 1 else press 0: ";
        cin >> z;
    }
}

int Queue::Delete_val( ) {
    if (f == -1) {
        cout << "Queue is Empty" << endl;
        return -1;
    }

    int x = arr[f];
    arr[f] = -1;
    if (f == r) {
        f = r = -1;
    }
    else {
        f = (f + 1) % size;
    }

    return x;
}

void Queue::Display( ) {
    if (f == -1) {
        cout << "Queue is Empty" << endl;
        return;
    }
    cout << "Elements in Circular Queue are: " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main( ) {
    int n;
    cout << "Enter the size of your Queue: ";
    cin >> n;

    Queue ob1(n);

    int input;
    int z;
    z = 1;
    while (z != 0) {
        if (z == 1) {
            cout << "Press 1 to Add an element to Circular Queue" << endl;
            cout << "Press 2 to Delete an element from Circular Queue" << endl;
            cout << "Press 3 to Display the Circular Queue" << endl;
            cout << "Press 4 to Exit the Program" << endl;
            cin >> input;

            switch (input) {
                case 1: {
                    ob1.Add_val( );
                    break;
                }
                case 2: {
                    int deletedValue = ob1.Delete_val( );
                    if (deletedValue != -1)
                        cout << deletedValue << " is Deleted!!!" << endl;
                    break;
                }
                case 3: {
                    ob1.Display( );
                    break;
                }
                case 4: {
                    cout << "Program exited successfully!!!" << endl;
                    z = 0;
                    break;
                }
                default: {
                    cout << "Enter a valid operation!!!" << endl;
                }
            }
        }
        else {
            cout << "Enter either 0 or 1." << endl;
        }

        if (z != 0) {
            cout << "If you want to continue performing operations on Queue, press 1, else 0: ";
            cin >> z;
        }
    }

    return 0;
}
