#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    static int count;

    Node( ) {
        count++;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    Node(int data , Node* nex) {
        this->data = data;
        this->next = nex;
    }

    ~Node( ) {
        count--;
    }
};

int Node::count = 0;

class Queue {
private:
    Node* f , * r;

public:
    Queue( ) {
        f = r = NULL;
    }

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (isEmpty( )) {
            f = r = newNode;
        }
        else {
            r->next = newNode;
            r = newNode;
        }
    }

    void dequeue( ) {
        if (isEmpty( )) {
            cout << "Queue is Already Empty !" << endl;
            return;
        }
        Node* del = f;
        f = f->next;
        if (f == NULL) {
            r = NULL;
        }
        delete f;
    }

    void display( ) {
        if (isEmpty( )) {
            cout << "Queue is Empty !" << endl;
        }
        else {
            Node* temp = f;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    bool isEmpty( ) {
        return (f == NULL && r == NULL);
    }
};

int main( ) {
    Queue q;

    q.display( );
    q.enqueue(4);
    q.enqueue(2);
    q.enqueue(6);
    q.enqueue(7);

    q.display( );
    q.dequeue( );
    q.dequeue( );
    q.dequeue( );

    q.display( );
    q.dequeue( );


    q.dequeue( );
    q.display( );
    return 0;
}