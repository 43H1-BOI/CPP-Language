#include <iostream>
using namespace std;

/*
11. Write a menu driven program to implement following operations on Singly Linked List
a. Create a list
b. Append Element
c. Add element at beginning
d. Add element after the element given
e. Count no of elements in the list
f. Display the elements of list
g. Delete an element
h. sort, merge, update, reverse
*/

struct node
{
    int data;
    node* link;
};

class SLL
{
    node* start = NULL;
    node* start2 = NULL;

public:
    void create_list( );
    void append( );
    void add_at_beg( );
    void add_after_element( );
    int count( );
    void display( );
    int delete_element( );
    void other_operations( );
};

void SLL::create_list( ) {
    node* temp2 = new node;
    temp2->data = 5;
    temp2->link = NULL;
    start2 = temp2;
    temp2 = new node;
    temp2->data = 10;
    start2->link = temp2;
    temp2->link = NULL;
    temp2 = new node;
    temp2->data = 15;
    start2->link->link = temp2;
    temp2->link = NULL;

    node* temp = new node;
    temp->data = 25;
    temp->link = NULL;
    start = temp;
    temp = new node;
    temp->data = 30;
    start->link = temp;
    temp->link = NULL;
    temp = new node;
    temp->data = 20;
    start->link->link = temp;
    temp->link = NULL;
}

void SLL::append( ) {
    node* temp = new node;
    int d;
    cout << "Enter data you want to append: ";
    cin >> d;
    temp->data = d;
    if (start == NULL) {
        start = temp;
    }
    else {
        node* t = start;
        while (t->link != NULL) {
            t = t->link;
        }
        t->link = temp;
    }
    temp->link = NULL;
}

void SLL::add_at_beg( ) {
    int d;
    cout << "Enter data you want to insert at beginning: ";
    cin >> d;
    node* temp = new node;
    temp->data = d;
    if (start == NULL) {
        start = temp;
        temp->link = NULL;
    }
    else {
        temp->link = start;
        start = temp;
    }
}

void SLL::add_after_element( ) {
    int d , element;
    cout << "Enter the data you want to enter after an element: ";
    cin >> d;
    cout << "Enter the element after which you want to insert this data: ";
    cin >> element;
    node* temp = new node;
    temp->data = d;
    temp->link = NULL;
    node* t = start;
    while (t != NULL && t->data != element) {
        t = t->link;
    }
    if (t == NULL) {
        cout << "Element not found!!!" << endl;
        delete temp;
    }
    else {
        temp->link = t->link;
        t->link = temp;
    }
}

void SLL::display( ) {
    node* tempo = start2;
    cout << "List 1->" << endl;
    while (tempo != NULL) {
        cout << tempo->data << endl;
        tempo = tempo->link;
    }
    cout << endl;
    tempo = start;
    cout << "List 2->" << endl;
    while (tempo != NULL) {
        cout << tempo->data << endl;
        tempo = tempo->link;
    }
}

int SLL::count( ) {
    int c = 0;
    node* temp = start;
    while (temp != NULL) {
        temp = temp->link;
        c++;
    }
    return c;
}

int SLL::delete_element( ) {
    int element;
    cout << "Enter element to delete: ";
    cin >> element;
    node* t = start;
    node* old = NULL;
    while (t != NULL && t->data != element) {
        old = t;
        t = t->link;
    }
    if (t == NULL) {
        cout << "Element not found!!!" << endl;
        return -1;
    }
    else {
        int d = t->data;

        if (t == start) {
            start = start->link;
        }

        else if (t->link == NULL) {
            old->link = NULL;
        }

        else {
            old->link = t->link;
        }
        return d;
    }
}

void SLL::other_operations( ) {
    int input;
    cout << "Enter 1 to Sort." << endl;
    cout << "Enter 2 to Merge." << endl;
    cout << "Enter 3 to Update." << endl;
    cout << "Enter 4 to Reverse." << endl;
    cin >> input;

    if (input == 1) {
        cout << "List before sorting:" << endl;
        display( );

        int x = count( );
        node* current , * next;
        int temp;

        for (int i = 0; i < x - 1; i++) {
            current = start;
            next = start->link;
            for (int j = 0; j < x - i - 1; j++) {
                if (next->data < current->data) {
                    temp = next->data;
                    next->data = current->data;
                    current->data = temp;
                }
                current = next;
                next = next->link;
            }
        }

        cout << "List after sorting:" << endl;
        display( );
    }

    else if (input == 2) {
        cout << "List before merging: " << endl;
        display( );
        cout << endl;
        cout << "Lists after merging:" << endl;
        node* t = start;
        while (t->link != NULL) {
            t = t->link;
        }
        t->link = start2;
        display( );
    }

    else if (input == 3) {
        display( );
        int x , y;
        node* t = start;
        cout << "Enter the data which you want to update: ";
        cin >> x;
        cout << "Enter the new value you want at that place: ";
        cin >> y;
        while (t != NULL) {
            if (t->data == x) {
                t->data = y;
                display( );
                break;
            }
            t = t->link;
        }
        if (t->link == NULL && t->data != x) {
            cout << "Value not found!!!" << endl;
        }
    }

    else if (input == 4) {
        cout << "List before reversing:" << endl;
        display( );
        node* prev = NULL , * current = start , * next = NULL;
        while (current != NULL) {
            next = current->link;
            current->link = prev;
            prev = current;
            current = next;
        }
        start = prev;
        cout << "List after reversing: " << endl;
        display( );
    }

    else {
        cout << "Enter a valid operation." << endl;
    }
}

int main( ) {
    SLL ob1;
    int input;
    int z = 1;
    ob1.create_list( );
    while (z != 0) {
        cout << "Press 1 Append Element." << endl;
        cout << "Press 2 to Add Element at Beginning." << endl;
        cout << "Press 3 to Add Element after the Element given." << endl;
        cout << "Press 4 to count number of Elements in the list." << endl;
        cout << "Press 5 to Display the Lists." << endl;
        cout << "Press 6 to Delete an Element." << endl;
        cout << "Press 7 to sort, merge, update or reverse the list." << endl;
        cout << "Press 8 to Exit the Program" << endl;
        cin >> input;

        switch (input) {
            case 1:
            ob1.append( );
            break;
            case 2:
            ob1.add_at_beg( );
            break;
            case 3:
            ob1.add_after_element( );
            break;
            case 4:
            cout << "Total elements in list are: " << ob1.count( );
            break;
            case 5:
            ob1.display( );
            break;
            case 6:
            cout << ob1.delete_element( ) << " is deleted!";
            break;
            case 7:
            ob1.other_operations( );
            break;
            case 8:
            cout << "Program exited successfully!!!" << endl;
            z = 0;
            break;
            default:
            cout << "Enter a valid operation!!!" << endl;
        }

        if (z != 0) {
            cout << "If you want to continue performing operations on Queue, press 1, else 0: ";
            cin >> z;
        }
    }
    return 0;
}