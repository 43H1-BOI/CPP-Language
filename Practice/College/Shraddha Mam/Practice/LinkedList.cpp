#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;

public:
    Node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtHead(int value , Node& head){
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(int value , Node& head){
    Node* new_node = new Node(value);
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPos(int value , Node& head , int pos){
    if (pos == 0){
        insertAtHead(value , head);
        return;
    }

    Node* new_node = new Node(value);
    Node* prev = head;
    for (int curr = 0; curr < pos - 1; curr++){
        prev = prev->next;
    }
    new_node->next = prev->next;
    prev->next = new_node;
}

void deleteAtHead(Node& head){
    Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteAtTail(Node& head){
    Node* last_2nd = head;
    while (last_2nd->next->next != NULL){
        last_2nd = last_2nd->next;
    }
    Node* del = last_2nd->next; // Pointing to last
    free(del);
    last_2nd->next = NULL;
}

void deleteAtPos(Node& head , int pos){
    if (pos == 0){
        deleteAtHead(head);
        return;
    }
    Node* prev = head;
    for (int curr = 0; curr < pos; curr++){
        prev = prev->next;
    }
    Node* del = prev->next;
    prev->next = del->next;
    free(del);
}

