#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    // Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node( ){
        if (this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }

};

void insertAtHead(int val , Node*& head , Node*& tail){ // To Insert at Head
    Node* newN = new Node(val);
    if (head != NULL){
        newN->next = head;
    }
    else{
        tail = newN;
    }
    head = newN;
}

void deleteAtHead(Node*& head){ // Delete at Head
    Node* temp = head;
    head = temp->next;
    delete temp;
}

void insertAtTail(int val , Node*& tail){ // Insert at End/Tail
    Node* newN = new Node(val);
    tail->next = newN;
    tail = newN;
}

void deleteAtTail(Node*& head , Node*& tail){ // Delete at End/Tail
    Node* temp = head; // last 2nd Node
    while (temp->next->next != NULL){
        temp = temp->next;
    }
    Node* last = temp->next; // last node
    temp->next = NULL;
    delete last; // or use free(last);
    tail = temp;
}

void insertAtPos(int val , int pos , Node*& head , Node*& tail){ // Insert at Any Position
    if (pos == 0){ // If Node is First
        insertAtHead(val , head , tail);
    }
    else{
        Node* prev = head;
        for (int curr = 0; curr < pos - 1; curr++){
            prev = prev->next;
        }
        if (prev->next == NULL){ // If the Node is Last
            insertAtTail(val , tail);
            return;
        }
        /*
            the above method is only usefull when we also get a tail pointer because
            that will make the insertAtTail() method more fast
        */

        Node* newNode = new Node(val);
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

void deleteAtPos(int pos , Node*& head){ // Delete at any Pos
    if (pos == 0){ // If Pos is at First Element
        deleteAtHead(head);
        return;
    }

    Node* previous = head; // previous node
    for (int curr = 0; curr < pos - 1; curr++){
        previous = previous->next;
    }
    Node* current = previous->next;
    previous->next = current->next;

    delete current;
    // free(current);   
}

void display(Node*& head){ // To Display the Linked List
    Node* temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main( ){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(5 , head , tail);
    insertAtHead(4 , head , tail);
    insertAtHead(3 , head , tail);
    insertAtTail(6 , tail);
    insertAtTail(7 , tail);
    display(head);

    cout << tail->data << "  " << head->data << endl;

    deleteAtHead(head);
    display(head);

    insertAtPos(8 , 3 , head , tail);
    display(head);


    return 0;
}