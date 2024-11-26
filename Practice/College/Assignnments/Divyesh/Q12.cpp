#include<iostream>
using namespace std;

/*
12. Write a menu driven program to implement a queue using Linked List.
*/

struct node {
    int data;
    node* link;
};

class QLL {
    node* front = NULL , * rear = NULL;
public:
    void enqueue( );
    void dequeue( );
    void peek( );
    void display( );
};

void QLL::enqueue( ) {
    node* temp = new node;
    int x;
    cout << "Enter the value to Enqueue: ";
    cin >> x;
    temp->data = x;
    temp->link = NULL;
    if (front == NULL) {
        front = rear = temp;
    }
    else {
        rear->link = temp;
        rear = rear->link;
    }
}

void QLL::dequeue( ) {
    if (front == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    node* temp = front;
    front = front->link;
    int x = temp->data;
    cout << x << " is deleted!" << endl;
    delete temp;
    if (front == NULL) {
        rear = NULL;
    }
}

void QLL::peek( ) {
    if (front == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    else {
        cout << front->data << " is the Peek element." << endl;
    }
}

void QLL::display( ) {
    if (front == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    else {
        node* temp = front;
        while (temp->link != NULL) {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << rear->data;
    }
    cout << endl;
}

int main( ) {
    QLL ob1;
    int input;
    int z = 1;

    while (z != 0) {
        cout << "Press 1 to Enqueue." << endl;
        cout << "Press 2 to Dequeue." << endl;
        cout << "Press 3 to fetch Peek Element." << endl;
        cout << "Press 4 to Display the Queue." << endl;
        cout << "Press 5 to Exit the Program" << endl;
        cin >> input;

        switch (input) {
            case 1:
            ob1.enqueue( );
            break;
            case 2:
            ob1.dequeue( );
            break;
            case 3:
            ob1.peek( );
            break;
            case 4:
            ob1.display( );
            break;
            case 5:
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