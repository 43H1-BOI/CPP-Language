#include <iostream>
using namespace std;

/*
11. Write a menu driven program to implement following operations on Singly Linked List
a. Create a list // Done
b. Append Element // Done
c. Add element at beginning // Done
d. Add element after the element given
e. Count no of elements in the list // Done
f. Display the elements of list // Done
g. Delete an element // Done
h. sort, merge, update, reverse
*/

class Node {
public:
    int data;
    Node* next;
    static int count;

    Node(int d) {
        data = d;
        next = NULL;
        count++;
    }

    ~Node( ) {
        count--;
    }
};

int Node::count = 0;

class SLL {
private:
    Node* head;

public:
    SLL( ) {
        head = nullptr;
    }

    int count( ) {
        return Node::count;
    }
    void insertAtBegin(int data);
    void insertAtEnd(int data);
    void deleteNode(int given);
    bool searchNode(int data);
    void display( );
    void reverse( );
    void sort( );
    void updateList( );
};

void SLL::insertAtBegin(int data) {
    Node* newNode = new Node(data);
    if (head != NULL)
        newNode->next = head;
    head = newNode;
}

void SLL::insertAtEnd(int data) {
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void SLL::deleteNode(int given) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    else if (head->data == given) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    int curr = 1; // count of curr element
    Node* prev = head;
    int flag = 0;
    while (curr <= Node::count) {
        if (prev->next->data == given) {
            Node* temp = prev->next;
            prev->next = temp->next;
            delete temp;
            flag++;
            break;
        }
        prev = prev->next;
    }

    if (!flag) {
        cout << "Element not Found" << endl;
    }
}

bool SLL::searchNode(int data) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == data) {
            // cout << "Node found" << endl;
            return true;
        }
        temp = temp->next;
    }
    // cout << "Node not found" << endl;
    return false;
}

void SLL::display( ) {
    if (head == nullptr) {
        cout << "LL is Empty !" << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void SLL::reverse( ) {
    if (head == NULL) {
        cout << "LL is Empty." << endl;
        return;
    }

    cout << "LL before Reversing : ";
    display( );

    Node* prev = NULL;
    Node* curr = head;
    Node* nex;

    while (curr != NULL) {
        nex = curr->next;
        curr->next = prev;

        prev = curr; // Incrementing prev and curr to next node
        curr = nex;
    }
    head = prev;
    cout << "LL reversed Successfully." << endl;
    cout << "LL after Reversing : ";
    display( );
}

void SLL::sort( ) {
    cout << "List before sorting:" << endl;
    display( );

    int x = count( );
    Node* curr , * nex;
    int temp;

    for (int i = 0; i < x - 1; i++) {
        curr = head;
        nex = head->next;
        for (int j = 0; j < x - i - 1; j++) {
            if (nex->data < curr->data) {
                temp = nex->data;
                nex->data = curr->data;
                curr->data = temp;
            }
            curr = nex;
            nex = nex->next;
        }
    }

    cout << "List after sorting:" << endl;
    display( );
}

void SLL::updateList( ) {
    Node* temp = head;
    int x , y;
    cout << "Enter the data which you want to update : ";
    cin >> x;
    cout << "Enter new value : ";
    cin >> y;

    while (temp != NULL) {
        if (temp->data == x) {
            temp->data = y;
            display( );
            break;
        }
        temp = temp->next;
    }
    if (temp->next == NULL && temp->data != x) {
        cout << "Value not found!!!" << endl;
    }
}

void showMenu( ) {
    cout << "\nSingly Linked List Operations Menu:" << endl;
    cout << "0. Show Menu" << endl;
    cout << "1. Insert at Beginning" << endl;
    cout << "2. Insert at End" << endl;
    cout << "3. Delete Node" << endl;
    cout << "4. Search Node" << endl;
    cout << "5. Count Node" << endl;
    cout << "6. Display List" << endl;
    cout << "7. Reverse List" << endl;
    cout << "8. Sort List" << endl;
    cout << "9. Update List" << endl;
    cout << "10. Exit" << endl;
}

int main( ) {
    SLL list;
    int choice , data;

    showMenu( );
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 0: {
                showMenu( );
                break;
            }

            case 1: {
                cout << "Enter data to insert at beginning: ";
                cin >> data;
                list.insertAtBegin(data);
                break;
            }

            case 2: {
                cout << "Enter data to insert at end: ";
                cin >> data;
                list.insertAtEnd(data);
                break;
            }

            case 3: {
                cout << "Enter data to delete: ";
                cin >> data;
                list.deleteNode(data);
                break;
            }

            case 4: {
                cout << "Enter data to search: ";
                cin >> data;
                cout << (list.searchNode(data) ? "Element Found" : "Element not Found") << endl;
                break;
            }

            case 5: {
                cout << "Number of Nodes = " << list.count( ) << endl;
                break;
            }

            case 6: {
                list.display( );
                break;
            }

            case 7: {
                list.reverse( );
                break;
            }

            case 8: {
                list.sort( );
                break;
            }

            case 9: {
                list.updateList( );
                break;
            }

            case 10: {
                cout << "Exiting Program !" << endl;
                break;
            }

            default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 10);

    return 0;
}