#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    static int count;

    Node(int d) { // Constructor
        data = d;
        next = NULL;
        count++;
    }

    ~Node( ) { //  Destructor
        count--;
    }
};

int Node::count = 0;

void display(Node*& tail) {
    if (tail == NULL) {
        cout << "No Element Present in Circular LL" << endl;
        return;
    }

    Node* temp = tail->next;
    int curr = 1;
    while (curr <= Node::count) {
        cout << temp->data << " ";
        temp = temp->next;
        curr++;
    }

    cout << "\n" << Node::count << " Elements";
    cout << endl;
}


// To insert node after any given element 
void insertByVal(int given , int val , Node*& tail) {
    Node* newN = new Node(val);
    if (tail == NULL) { // If LL is Empty
        tail = newN;
        newN->next = newN;
    }
    else {
        Node* temp = tail->next;
        int i;
        // 1. Iterate untill not found the given value
        while (temp != tail) {
            if (temp->data == given)
                break;
            temp = temp->next;
        }

        if (temp->data == given) { // Element found 
            newN->next = temp->next;
            temp->next = newN;
            if (tail->next == newN) { // Element found at last position
                tail = newN;
            }
            return;
        }
        else { // No element found
            cout << "Given ELement Not Found !" << endl;
            delete newN;
            return;
        }
    }
}

void insertAtHead(int val , Node*& tail) { // Done
    Node* newN = new Node(val);
    if (tail == NULL) { // If Circular LL is Empty
        tail = newN;
    }
    else {
        Node* first = tail->next;
        newN->next = first;
    }
    tail->next = newN;
}

void deleteAtHead(Node*& tail) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    if (tail->next == tail) {
        delete tail;
        tail = NULL;
    }
    else {

        Node* temp = tail->next;
        tail->next = temp->next;
        temp->next = NULL;
        delete temp;
    }
}


int main( ) {
    Node* tail = NULL;

    insertByVal(5 , 3 , tail);
    display(tail);

    // insertAtHead(2 , tail);
    // display(tail);

    insertByVal(3 , 4 , tail);
    display(tail);

    insertByVal(4 , 6 , tail);
    display(tail);

    insertByVal(4 , 5 , tail);
    display(tail);

    return 0;
}