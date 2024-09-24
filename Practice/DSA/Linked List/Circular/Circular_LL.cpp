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
        if (next != NULL) {
            next = NULL;
        }
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
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);

    cout << "\n" << Node::count << " Elements";
    cout << endl;
}

// To insert node after any given element 
void insertByVal(int given , int val , Node*& tail) {
    Node* newN = new Node(val);
    if (tail == NULL) {
        tail = newN;
        newN->next = newN;
    }
    else {
        Node* temp = tail;
        // 1. Iterate untill not found the given value
        int i = 1;
        while (temp->data != given && i <= Node::count) {
            temp = temp->next;
            i++;
            /*
            // 2. if loop again reaches to the tail {No element found}
            if (temp->next == tail) { //{No element found}
                cout << "Given ELement Not Found !" << endl;
                // cout << "Enter element again : " ;
                // cin >> given ;
                return;
            }
            */
        }

        if (temp->data == given) { // Element found 
            if (i == Node::count) { // Element found at last position
                newN->next = tail->next;
                temp->next = newN;
                tail = newN;
            }
            else {
                newN->next = temp->next;
                temp->next = newN;
            }
            return;
        }
        else { // No element found
            cout << "Given ELement Not Found !" << endl;
            // cout << "Enter element again : " ;
            // cin >> given ;
            return;
        }
    }
}

void insertAtHead(int val , Node*& tail) { // Done
    Node* newN = new Node(val);
    if (tail == NULL) { // If no element present in Circular LL
        tail = newN;
    }
    else {
        Node* first = tail->next;
        newN->next = first;
    }
    tail->next = newN;
}

void deleteAtHead(Node*& tail) {
    Node* temp = tail->next;
    tail->next = temp->next;
    temp->next = NULL;
    delete temp;
}


int main( ) {
    Node* tail = NULL;

    insertByVal(5 , 3 , tail);
    display(tail);

    insertAtHead(2 , tail);
    display(tail);

    insertByVal(3 , 4 , tail);
    display(tail);

    insertByVal(4 , 6 , tail);
    display(tail);

    insertByVal(4 , 5 , tail);
    display(tail);

    return 0;
}