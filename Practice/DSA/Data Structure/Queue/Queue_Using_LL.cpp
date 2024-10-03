#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    static int count;

    Node( ) { }
    Node(int val) {
        data = val;
        next = NULL;
        count++;
    }
    ~Node( ) {
        count--;
    }
};

int Node::count = 0;

void enqueue(Node*& front , Node*& rear , int val) {
    Node* newNode = new Node(val);
    if (front == NULL) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void dequeue(Node*& front , Node*& rear) {
    if (front == NULL) {
        cout << "Queue is Empty , Unable to Dequeue" << endl;
    }
    else {
        Node* temp = front;
        front = front->next;
        cout << "Dequeued : " << temp->data << endl;
        if (front == NULL) {
            rear = NULL;
        }
        delete temp;
    }
}

void display(Node*& front , Node*& rear) {
    if (front == NULL) {
        cout << "Queue is Empty !" << endl;
        return;
    }

    Node* temp = front;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != NULL);
    cout << endl;
}

int main( ) {
    Node* front , * rear;
    front = rear = NULL;
    enqueue(front , rear , 2);
    enqueue(front , rear , 3);
    enqueue(front , rear , 4);
    enqueue(front , rear , 5);
    display(front , rear);

    dequeue(front , rear);
    display(front , rear);

    dequeue(front , rear);
    dequeue(front , rear);
    dequeue(front , rear);
    display(front , rear);

    return 0;
}