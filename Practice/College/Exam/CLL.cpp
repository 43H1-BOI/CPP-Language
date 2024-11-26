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

class CLL {
    Node* tail;

public:
    CLL( ) {
        tail = NULL;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            tail = newNode;
        }
        newNode->next = tail->next;
        tail->next = newNode;
    }

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            tail = newNode;
        }
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }

    void deleteAtHead( ) {
        if (tail == NULL) {
            cout << "CLL is Empty !" << endl;
            return;
        }
        Node* del = tail->next;
        tail->next = tail->next->next;
        delete del;
    }

    void deleteAtTail( ) {
        if (tail == NULL) {
            cout << "CLL is Empty !" << endl;
            return;
        }
        Node* del = tail;
        Node* temp = tail->next;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = tail->next;
        tail = temp;

        delete temp;
    }

    void display( ) {
        if (tail == NULL) {
            cout << "CLL is Empty !" << endl;
            return;
        }
        Node* temp = tail->next;
        do {
            cout << temp->data << "  ";
            temp = temp->next;
        } while (temp != tail->next);
        cout << endl;
    }
};

int main( ) {
    CLL l;

    l.display( );
    l.insertAtHead(5);
    l.insertAtHead(4);
    l.insertAtHead(8);
    l.insertAtHead(2);
    l.insertAtTail(1);

    l.display( );
    l.deleteAtHead( );

    l.display( );
    l.deleteAtTail( );

    l.display( );

    return 0;
}