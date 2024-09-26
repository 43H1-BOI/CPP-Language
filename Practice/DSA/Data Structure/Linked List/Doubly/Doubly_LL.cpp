#include<iostream>
using namespace std;

class Node{
public:
    Node* prev; // To store Address of Prev. Node
    int data;
    Node* next; // To store Address of Next Node

    Node(int val){ // Constructor
        prev = NULL;
        data = val;
        next = NULL;
    }

    ~Node( ){ // Destructor
    // agar node me next and prev address pe NULL nhi he to unhe pehle NULL karo
    // then delete ke lie proceed karo
        if (next != NULL || prev != NULL){
            this->next = NULL;
            this->prev = NULL;
        }
        delete next;
    }
};

void insertAtHead(int val , Node*& head){
    Node* newNode = new Node(val);
    if (head != NULL){
        newNode->next = head;
        head->prev = newNode;
    }
    head = newNode;
}

void deleteAtHead(Node*& head){
    Node* temp = head;
    head = temp->next;
    temp->next = NULL;
    head->prev = NULL;
    delete temp;
}


void insertAtPos(int val , int pos , Node*& head){
    if (pos == 0){
        insertAtHead(val , head);
    }
    else{
        Node* newN = new Node(val);
        Node* previous = head; // previous node
        for (int curr = 1; curr < pos - 1; curr++){
            previous = previous->next;
        }
        newN->prev = previous;
        newN->next = previous->next;
        newN->next->prev = newN;
        previous->next = newN;
    }
}

void deleteAtPos(int pos , Node*& head){
    if (pos == 0){
        deleteAtHead(head);
        return;
    }
    Node* delNode = head; // Deleting Node
    for (int curr = 1; curr <= pos; curr++){
        delNode = delNode->next;
    }
    delNode->prev->next = delNode->next;
    delNode->next->prev = delNode->prev;
    delNode->next = NULL;
    delNode->prev = NULL;
    delete delNode;
}

void insertAtTail(int val , Node*& head){
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    Node* newN = new Node(val);
    temp->next = newN;
    newN->prev = temp;
}

void deleteAtTail(Node*& head){
    Node* temp = head;
    while (temp->next->next != NULL){
        temp = temp->next;
    }
    Node* last = temp->next; // Last Node (deleting node)
    last->prev = NULL;
    temp->next = NULL;
    delete last;
}


void display(Node*& head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main( ){
    Node* head = NULL;

    insertAtHead(5 , head);
    insertAtHead(4 , head);
    insertAtHead(3 , head);
    display(head);

    insertAtHead(2 , head);
    display(head);

    insertAtTail(6 , head);
    display(head);

    insertAtPos(1 , 1 , head);
    display(head);

    cout << "\ndelete at pos 2" << endl;

    deleteAtPos(2 , head);
    display(head);

    deleteAtHead(head);
    display(head);

    deleteAtTail(head);
    display(head);

    return 0;
}