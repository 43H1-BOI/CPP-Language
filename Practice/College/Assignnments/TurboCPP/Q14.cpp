// 14. Write a menu driven program to implement Circular Linked List.

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    static int count;

    Node( ) { }
    Node(int val) {
        this->data = val;
        this->next = NULL;
        count++;
    }
    Node(int val , Node* nex) {
        this->data = val;
        this->next = nex;
        count++;
    }
    ~Node( ) {
        count--;
    }
};

int Node::count = 0;

void insertAtHead(int val , Node*& tail) {
    Node* newNode = new Node(val);
    if (tail == NULL) {
        tail = newNode;
    }
    newNode->next = tail->next;
    tail->next = newNode;
}

void insertAtTail(int val , Node*& tail) {
    Node* newNode = new Node(val , tail->next);
    if (tail == NULL) {

    }
    tail = newNode;

}

void display(Node*& tail) {
    Node* temp = tail->next;
    do {
        cout << temp->data << "  ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << "NULL" << endl;
}

int main( ) {
    Node* tail = NULL;
    insertAtHead(5 , tail);
    insertAtHead(4 , tail);
    display(tail);

    return 0;
}