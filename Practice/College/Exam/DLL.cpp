#include<iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;
    Node* prev;
    static int count;

    Node( ) {
        count++;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data , Node* nex) {
        this->data = data;
        this->next = nex;
        this->prev = NULL;
    }
    Node(int data , Node* nex , Node* pre) {
        this->data = data;
        this->next = nex;
        this->prev = pre;
    }

    ~Node( ) {
        count--;
    }
};

int Node::count = 0;


class DLL {
private:
    Node* head , * tail;

public:
    DLL( ) {
        head = NULL;
    }

    bool isEmpty( ) {
        return (head == NULL);
    }

    void insertAtHead(int val) {
        if (isEmpty( )) {
            Node* newNode = new Node(val);
            head = newNode;
            return;
        }

        Node* newNode = new Node(val , head);
        // newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void insertAtTail(int val) {
        if (isEmpty( )) {
            insertAtHead(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head; // last second ele
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteAtHead( ) {
        if (isEmpty( )) {
            cout << "DLL is Empty !" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;

        head->prev = NULL;
        delete temp;
    }

    void deleteAtTail( ) {
        if (isEmpty( )) {
            cout << "DLL is Empty !" << endl;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        Node* del = temp->next;
        temp->next = NULL;
        temp->prev = NULL;

        delete del;
    }

    void display( ) {
        if (isEmpty( )) {
            cout << "DLL is Empty !" << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main( ) {
    DLL l;

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