#include<iostream>
using namespace std;

/*
4. Write a menu driven program to implement stack using linked list.
*/

struct node {
    int data;
    node* next;
};

class Stack_linklist {
    node* tos = NULL;  // Top of Stack
public:
    void push( );
    int pop( );
    int peek( );
    void Isempty( );
    void display( );
    ~Stack_linklist( );
};

void Stack_linklist::push( ) {
    int m = 1;
    while (m != 0) {
        if (m == 1) {
            int x;
            cout << "Enter the value to push: ";
            cin >> x;
            node* temp = new node;
            temp->data = x;
            temp->next = tos;
            tos = temp;
        }
        else {
            cout << "Enter either 0 or 1." << endl;
        }
        cout << "Press 1 if you want to continue pushing the values in Stack, else enter 0 to exit the Pop operation." << endl;
        cin >> m;
    }
}

int Stack_linklist::pop( ) {
    if (tos == NULL) {
        cout << "Underflow!!" << endl;
        return -1;
    }
    node* temp = tos;
    tos = tos->next;
    int x = temp->data;
    cout << x << " is popped!" << endl;
    delete temp;
    return x;
}

int Stack_linklist::peek( ) {
    if (tos == NULL) {
        cout << "Stack is Empty!!!" << endl;
        return -1;
    }
    return tos->data;
}

void Stack_linklist::display( ) {
    if (tos == NULL) {
        cout << "Stack is empty!" << endl;
        return;
    }
    node* temp = tos;
    cout << "Elements in Stack are: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Stack_linklist::Isempty( ) {
    if (tos == NULL) {
        cout << "Stack is Empty!" << endl;
    }
    else {
        cout << "Stack is not Empty!" << endl;
    }
}

Stack_linklist::~Stack_linklist( ) {
    while (tos != NULL) {
        node* temp = tos;
        tos = tos->next;
        delete temp;
    }
}

int main( ) {
    Stack_linklist ob1;
    int input;
    int z;
    z = 1;
    while (z != 0) {
        if (z == 1) {
            cout << "Press 1 to Push an element" << endl;
            cout << "Press 2 to Pop an element" << endl;
            cout << "Press 3 to check if the Stack is empty" << endl;
            cout << "Press 4 to see the top element of Stack" << endl;
            cout << "Press 5 to Display Stack" << endl;
            cout << "Press 6 to Exit the Program" << endl;
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
                    ob1.Isempty( );
                    break;
                }
                case 4:
                {
                    cout << "Value at top of Stack is: " << ob1.peek( ) << endl;
                    break;
                }
                case 5:
                {
                    ob1.display( );
                    break;
                }
                case 6:
                {
                    cout << "Program exited successfully!!!" << endl;
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
        cout << "if you want to continue performing operations on Stack, press 1, else 0" << endl;
        cin >> z;
    }
    return 0;
}
