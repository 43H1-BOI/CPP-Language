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
    Node(int data , Node* next) {
        this->data = data;
        this->next = next;
    }

    ~Node( ) {
        count--;
    }
};

int Node::count = 0;

class LinkedList {
public:
    Node* head;
    LinkedList( ) {
        head = NULL;
    }

    void insertAtHead(int data) {
        Node* newNode = new Node(data);
        if (!isEmpty( )) {
            newNode->next = head;
        }
        head = newNode;
    }

    void insertAtTail(int data) {
        if (isEmpty( )) {
            insertAtHead(data);
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        Node* newNode = new Node(data);
        temp->next = newNode;
    }

    void display( ) {
        if (isEmpty( )) {
            cout << "Linked List is Empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteFromHead( ) {
        if (isEmpty( )) {
            cout << "Linked List is Already Empty." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        cout << "Deleted " << temp->data << endl;
        delete temp;
    }

    void deleteFromTail( ) {
        if (isEmpty( )) {
            cout << "Linked List is Already Empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        Node* del = temp->next;
        temp->next = NULL;
        cout << "Deleted " << del->data << endl;
        delete del;
    }

    void deleteFromPos(int idx) {
        if (isEmpty( )) {
            cout << "Unable to Delete B'coz LL is Empty" << endl;
            return;
        }

    }

    bool isEmpty( ) {
        return (head == NULL);
    }
};

int main( ) {
    LinkedList ll;
    ll.display( );

    ll.insertAtTail(4);
    ll.insertAtHead(5);
    ll.insertAtHead(3);
    ll.display( );

    ll.deleteFromHead( );
    ll.deleteFromTail( );
    ll.display( );
    return 0;
}