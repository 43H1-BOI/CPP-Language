#include<iostream>
using namespace std;

// Append Last K Nodes of a Linked List

class Node {
public:
    int data;
    Node* next;
    static int count;

    // Constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
        count++;
    }

    // Destructor
    ~Node( ) {
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        count--;
    }

};

int Node::count = 0;

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

void insertAtPos(int val , int pos , Node*& head) { // Insert at Any Position
    if (pos == 0) { // If Node is First
        insertAtHead(val , head);
    }
    else {
        Node* prev = head;
        for (int curr = 0; curr < pos - 1; curr++) {
            prev = prev->next;
        }

        Node* newNode = new Node(val);
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

void deleteAtPos(int pos , Node*& head) { // Delete at any Pos
    if (pos == 0) { // If Pos is at First Element
        deleteAtHead(head);
        return;
    }

    Node* previous = head; // previous node
    for (int curr = 0; curr < pos - 1; curr++) {
        previous = previous->next;
    }
    Node* current = previous->next;
    previous->next = current->next;
    delete current;
    // free(current);   
}

void display(Node*& head) { // To Display the Linked List
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << "Total Nodes = " << Node::count << endl;
}

void reverse(Node*& head) {
    Node* previous = NULL;
    Node* curr = head;
    Node* nex;
//4 -> 5 -> 6 -> 8 -> 7 -> NULL
//
    do {
        nex = curr->next;
        curr->next = previous;
        previous = curr;
        curr = nex;
    } while (curr != NULL);

    head = previous;
}

Node* recursiveReverse(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* newHead = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

Node* reverseK(Node* head , int k) {
    Node* prev = NULL;
    Node* curr = head;
    Node* nex;

    int count = 0;
    while (curr != NULL && count < k) {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
        count++;
    }

    if (nex != NULL) {
        head->next = reverseK(nex , k);
    }
    return prev;
}

bool detectCycle(Node*& head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next; // Travels 1 Node
        fast = fast->next->next; // Travel 2 Nodes
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

void deleteCycle(Node*& head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next; // Travels 1 Node
        fast = fast->next->next; // Travel 2 Nodes
        if (slow == fast) {
            fast = head;
            while (fast->next != slow->next) {
                fast = fast->next;
                slow = slow->next;
            }
            slow->next = NULL;
            cout << "Cycle Deleted Successful" << endl;
            return;
        }
    }
    cout << "Cycle Deleted Unsuccessful , B'coz No Cycle Found" << endl;
}

void makeCycle(Node*& head , int pos) {
    Node* temp = head;
    Node* startNode;

    int count = 1;
    while (temp->next != NULL) {
        if (count == pos) {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

// Done
void appendKNodes(Node*& head , int k) {
    int pos = Node::count - k;
    int curr = 1;

    Node* newTail = head;
    while (curr < pos) {
        newTail = newTail->next;
        curr++;
    }

    Node* newHead = newTail->next;
    Node* tail = newHead;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = head;
    newTail->next = NULL;
    head = newHead;
    // return newHead;
}

// this will return Node*
Node* appendKNode(Node*& head , int k) {
    int pos = Node::count - k;
    int curr = 1;

    Node* newTail = head;
    while (curr < pos) {
        newTail = newTail->next;
        curr++;
    }

    Node* newHead = newTail->next;
    Node* tail = newHead;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = head;
    newTail->next = NULL;
    // head = newHead;
    return newHead;
}

int main( ) {
    Node* head = NULL;

    insertAtHead(5 , head);
    insertAtHead(4 , head);
    insertAtHead(3 , head);
    insertAtTail(6 , head);
    insertAtTail(7 , head);
    display(head);

    deleteAtHead(head);
    display(head);

    insertAtPos(8 , 3 , head);
    // deleteCycle(head);
    display(head);

    cout << "\nAppending 3 Node from last to Start : " << endl;
    Node* newHead = appendKNode(head , 3);
    // appendKNodes(head , 2);
    display(newHead);

}