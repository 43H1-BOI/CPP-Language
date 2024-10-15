#include<iostream>
using namespace std;

// Basic Linked List Code
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node( ) {
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
    }

};

void insertAtHead(int val , Node*& head) { // To Insert at Head
    Node* newN = new Node(val);
    if (head != NULL) {
        newN->next = head;
    }
    head = newN;
}

void deleteAtHead(Node*& head) { // Delete at Head
    Node* temp = head;
    head = temp->next;
    temp->next = NULL;
    delete temp;
}

void insertAtTail(int val , Node*& head) { // Insert at End/Tail
    Node* newN = new Node(val);
    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newN;
}

void deleteAtTail(Node*& head) { // Delete at End/Tail
    Node* temp = head; // last 2nd Node
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    Node* last = temp->next; // last node
    temp->next = NULL;
    delete last; // or use free(last);
}

void display(Node*& head) { // To Display the Linked List
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

/*
206. Reverse Linked List - Easy

Description :
    Given the head of a singly linked list, reverse the list, and return the reversed list.

Example 1:
    Input: head = [1,2,3,4,5]
    Output: [5,4,3,2,1]

Example 2:
    Input: head = [1,2]
    Output: [2,1]
    Example 3:
    Input: head = []
    Output: []

Constraints:
    The number of nodes in the list is the range [0, 5000].
    -5000 <= Node.val <= 5000
*/

Node* reverseList(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;

// Non - Recursive Method
    // Node* prev = NULL ;
    // Node* curr = head ;
    // Node* nex ;

    // while(curr != NULL){
    //     nex = curr->next;
    //     curr->next = prev;

    //     prev = curr;
    //     curr = nex;
    // }
    // return prev; // newHead
}

int main( ) {
    cout << "206. Reverse Linked List " << endl;
    Node* head = NULL;

    insertAtHead(5 , head);
    insertAtHead(4 , head);
    insertAtHead(3 , head);
    insertAtTail(6 , head);
    insertAtTail(7 , head);
    display(head);

    head = reverseList(head);
    display(head);

    return 0;
}