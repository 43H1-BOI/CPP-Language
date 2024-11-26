#include<iostream>
using namespace std;

/*
7. Write a menu driven program to implement a queue using arrays.
*/

class Queue {
    int rear , front , cap;
    int* q;
public:
    Queue(int c) {
        r = f = -1;
        cap = c;
        q = new int[c];
        for (int i = 0; i < c; i++) {
            q[i] = -1;
        }
    };
    ~Queue( ) {
        delete[ ] q;
    }
    void push( );
    int pop( );
    int peek( );
    bool IsEmpty( );
    int size( );
    void display( );
};


void Queue::push( ) {
    int m = 1;
    while (m != 0) {
        if (m == 1) {
            int x;
            cout << "Enter the value to push: ";
            cin >> x;
            if (rear == (cap - 1)) {
                cout << "Queue is Full!!!" << endl;
                return;
            }
            rear++;
            q[rear] = x;
            if (f == -1) {
                f = 0;
            }
        }
        else {
            cout << "Enter either 0 or 1." << endl;
        }
        cout << "Press 1 if you want to continue pushing the values in Queue, else enter 0 to exit the Push operation." << endl;
        cin >> m;
    }
}

int Queue::pop( ) {
    if (rear == -1) {
        cout << "Queue is Empty" << endl;
        return -1;
    }
    if (rear == f) {
        rear = f = -1;
    }
    int t;
    t = q[f];
    q[f] = -1;
    f++;
    return t;
}

int Queue::peek( ) {
    if (rear == -1) {
        cout << "Queue is Empty!!!" << endl;
        return -1;
    }
    return q[f];
}

bool Queue::IsEmpty( ) {
    if (rear == -1) {
        return true;
    }
    else {
        return false;
    }
}

int Queue::size( ) {
    if (rear == -1) {
        return 0;
    }
    else
        return (rear - f + 1);
}

void Queue::display( ) {
    if (rear == -1) {
        cout << "Queue is Empty!!!" << endl;
        return;
    }
    cout << endl;
    for (int i = 0; i < cap; i++) {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main( ) {
    Queue ob1(10);
    int input;
    int z;
    z = 1;
    while (z != 0) {
        if (z == 1) {
            cout << "Press 1 to Push an element" << endl;
            cout << "Press 2 to Pop an element" << endl;
            cout << "Press 3 to check if the Queue is empty" << endl;
            cout << "Press 4 to see the top element of Queue" << endl;
            cout << "Press 5 to fetch the size of Queue" << endl;
            cout << "Press 6 to display the Queue" << endl;
            cout << "Press 7 to Exit the Program" << endl;
            cin >> input;

            switch (input) {
                case 1:
                {
                    ob1.push( );
                    break;
                }
                case 2:
                {
                    ob1.pop( );
                    break;
                }
                case 3:
                {
                    if (ob1.IsEmpty( )) {
                        cout << "True" << endl;
                    }
                    else {
                        cout << "False" << endl;
                    }
                    break;
                }
                case 4:
                {
                    cout << "Value at top of Queue is: " << ob1.peek( ) << endl;
                    break;
                }
                case 5:
                {
                    cout << "Size of Queue is: " << ob1.size( ) << endl;
                    break;
                }
                case 6:
                {
                    ob1.display( );
                    break;
                }
                case 7:
                {
                    cout << "Program exited successfully!!!" << endl;
                    z = 0;
                    break;
                }
                default:
                {
                    cout << "Enter a valid operation!!!" << endl;
                }
            }
        }
        else {
            cout << "Enter either 0 or 1." << endl;
        }
        if (z != 0) {
            cout << "if you want to continue performing operations on Queue, press 1, else 0" << endl;
            cin >> z;
        }
    }
    return 0;
}