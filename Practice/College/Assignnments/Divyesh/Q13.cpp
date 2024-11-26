#include <iostream>
using namespace std;

/*
13. Write a menu driven program to implement following operations on Doubly Linked List.
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
    node* next;
    node* prev;
};

class DLL
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

void DLL::create_list( ) {
    node* temp = new node;
    temp->data = 10;
    temp->next = NULL;
    temp->prev = NULL;
    start = temp;
    node* newNode = new node;
    newNode->data = 20;
    newNode->prev = start;
    newNode->next = NULL;
    start->next = newNode;
    temp = newNode;
    newNode = new node;
    newNode->data = 30;
    newNode->prev = temp;
    newNode->next = NULL;
    temp->next = newNode;

    node* temp2 = new node;
    temp2->data = 100;
    temp2->next = NULL;
    temp2->prev = NULL;
    start2 = temp2;
    node* newNode2 = new node;
    newNode2->data = 200;
    newNode2->prev = start2;
    newNode2->next = NULL;
    start2->next = newNode2;
    temp2 = newNode2;
    newNode2 = new node;
    newNode2->data = 300;
    newNode2->prev = temp2;
    newNode2->next = NULL;
    temp2->next = newNode2;
}

void DLL::append( ) {
    node* temp = new node;
    int d;
    cout << "Enter data: ";
    cin >> d;
    temp->data = d;
    temp->prev = NULL;
    temp->next = NULL;
    int c = count( );
    node* t = start;
    if (c == 0) {
        start = temp;
    }
    else {
        while (t->next != NULL) {
            t = t->next;
        }
        t->next = temp;
        temp->prev = t;
    }
}

void DLL::add_at_beg( ) {
    node* temp = new node;
    int d;
    cout << "Enter data: ";
    cin >> d;
    temp->data = d;
    temp->prev = NULL;
    temp->next = NULL;
    int c = count( );
    if (c == 0) {
        start = temp;
    }
    else {
        temp->next = start;
        start->prev = temp;
        start = temp;
    }
}

void DLL::add_after_element( ) {
    int d , element;
    cout << "Enter the data you want to enter after an element: ";
    cin >> d;
    cout << "Enter the element after which you want to insert this data: ";
    cin >> element;
    node* temp = new node;
    temp->data = d;
    temp->next = NULL;
    temp->prev = NULL;
    node* t = start;
    while (t != NULL && t->data != element) {
        t = t->next;
    }

    if (t == NULL) {
        cout << "Element not found!!!" << endl;
        delete temp;
    }
    else {
        temp->next = t->next;
        if (t->next != NULL) {
            t->next->prev = temp;
        }
        t->next = temp;
        temp->prev = t;
    }
}

void DLL::display( ) {
    node* tempo = start;
    cout << "List 1->" << endl;
    while (tempo != NULL) {
        cout << tempo->data << endl;
        tempo = tempo->next;
    }
    cout << endl;
    tempo = start2;
    cout << "List 2->" << endl;
    while (tempo != NULL) {
        cout << tempo->data << endl;
        tempo = tempo->next;
    }
}

int DLL::count( ) {
    int c = 0;
    node* temp = start;
    while (temp != NULL) {
        temp = temp->next;
        c++;
    }
    return c;
}

int DLL::delete_element( ) {
    node* t = start;
    if (t == NULL) {
        cout << "List is Empty" << endl;
        return -1;
    }
    else {
        int element;
        cout << "Enter element to delete: ";
        cin >> element;
        node* old = NULL;
        while (t != NULL && t->data != element) {
            old = t;
            t = t->next;
        }
        if (t == NULL) {
            cout << "Element not found!!!" << endl;
            return -1;
        }
        else {
            int d = t->data;

            if (t == start) {
                start = start->next;
            }

            else if (t->next == NULL) {
                old->next = NULL;
            }

            else {
                old->next = t->next;
            }
            delete t;
            return d;
        }
    }
}

void DLL::other_operations( ) {
    int input;
    cout << "Enter 1 to Sort." << endl;
    cout << "Enter 2 to Merge." << endl;
    cout << "Enter 3 to Update." << endl;
    cout << "Enter 4 to Reverse." << endl;
    cin >> input;

    // if (input == 1)
    // {
    //     cout << "List before sorting:" << endl;
    //     display();

    //     int x = count();
    //     node *current, *next;
    //     int temp;

    //     for (int i = 0; i < x - 1; i++)
    //     {
    //         current = start;
    //         next = start->next;
    //         for (int j = 0; j < x - i - 1; j++)
    //         {
    //             if (next->data < current->data)
    //             {
    //                 temp = next->data;
    //                 next->data = current->data;
    //                 current->data = temp;
    //             }
    //             current = next;
    //             next = next->next;
    //         }
    //     }

    //     cout << "List after sorting:" << endl;
    //     display();
    // }

    if (input == 1) {
        cout << "List before sorting:" << endl;
        display( );

        int x = count( );
        node* next;
        int temp;

        for (int i = 0; i < x - 1; i++) {
            next = start->next;
            for (int j = 0; j < x - i - 1; j++) {
                if (next->data < next->prev->data) {
                    temp = next->data;
                    next->data = next->prev->data;
                    next->prev->data = temp;
                }
                next = next->next;
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
        while (t->next != NULL) {
            t = t->next;
        }
        t->next = start2;
        display( );
    }

    else if (input == 3) {
        display( );
        int x , y;
        node* t = start;
        cout << "Enter the data which you want to update in List 1: ";
        cin >> x;
        cout << "Enter the new value you want at that place: ";
        cin >> y;
        while (t != NULL) {
            if (t->data == x) {
                t->data = y;
                display( );
                break;
            }
            t = t->next;
        }
        if (t->next == NULL && t->data != x) {
            cout << "Value not found!!!" << endl;
        }
    }

    else if (input == 4) {
        cout << "List before reversing:" << endl;
        display( );
        cout << endl;
        cout << endl;
        cout << "List after reversing: " << endl;
        node* t = start;
        node* t2 = start2;
        while (t->next != NULL) {
            t = t->next;
        }
        while (t != NULL) {
            cout << t->data << endl;
            t = t->prev;
        }
    }

    else {
        cout << "Enter a valid operation." << endl;
    }
}

int main( ) {
    DLL ob1;
    int input;
    int z = 1;
    ob1.create_list( );
    ob1.display( );
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
            case 6: {
                int x = ob1.delete_element( );
                if (x == -1) {
                    cout << "Deletion not performed" << endl;
                }
                else {
                    cout << x << " is deleted!" << endl;
                }
                break;
            }
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