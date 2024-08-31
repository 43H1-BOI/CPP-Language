#include<iostream>
using namespace std;

// Singly Linked List

class Node{ // Node for Linked List
public:
    int data; // data inside Node
    Node* next; // pointer of Node type which points to the next Node

    Node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtHead(Node*& head , int value){ // To Insert Element at Head of LL
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* head , int value){ // To Insert Element at Tail of LL
    Node* new_node = new Node(value);

    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPos(Node* head , int value , int pos){ // To Insert Element at any Position of LL

    if (pos == 0){
        insertAtHead(head , value);
        return;
    }

    Node* new_node = new Node(value);

    Node* temp = head;
    int current = 0;
    while (current < pos - 1){
        temp = temp->next;
        current++;
    }
/*  // Via for Loop
    for (int i = 0; i < pos; i++){
        temp = temp->next;
    }
*/
    new_node->next = temp->next;
    temp->next = new_node;
}

void display(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void updateAtPos(Node*& head , int val , int pos){
    Node* temp = head;

    for (int curr = 0; curr <= pos; curr++){
        temp = temp->next;
    }
    temp->data = val;
}

void deleteAtHead(Node*& head){
    Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteAtTail(Node*& head){
    Node* second_last = head;
    while (second_last->next->next != NULL){
        second_last = second_last->next;
    }
    Node* temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}

void deleteAtPos(Node*& head , int pos){
    if (pos == 0){
        deleteAtHead(head);
        return;
    }

    Node* prev = head;

    for (int curr = 0; curr < pos; curr++){
        prev = prev->next;
    }

    Node* temp = prev->next;
    prev->next = prev->next->next; //Pointing to the Next Node of temp (Node to be removed)
    free(temp);
}


    // 5 -> 4 -> 3 -> 2 -> 1 -> NULL
int main( ){
    Node* head = NULL;
    insertAtHead(head , 5);
    display(head);
    cout << endl;

    insertAtHead(head , 3);
    display(head);
    cout << endl;

    insertAtTail(head , 7);
    display(head);
    cout << endl;

    insertAtTail(head , 9);
    display(head);
    cout << endl;

    insertAtPos(head , 6 , 3);
    display(head);
    cout << endl;

    insertAtPos(head , 4 , 3);
    display(head);
    cout << endl;

    updateAtPos(head , 7 , 3);
    display(head);
    cout << endl;

    deleteAtHead(head);
    display(head);
    cout << endl;

    deleteAtTail(head);
    display(head);
    cout << endl;


    return 0;
}