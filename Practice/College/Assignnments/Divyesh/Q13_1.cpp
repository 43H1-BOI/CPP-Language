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

}

void DLL::append( ) {
    node* temp = new node;

}

void DLL::add_at_beg( ) {

}

void DLL::add_after_element( ) {

}

void DLL::display( ) {

}

int DLL::count( ) {

}

int DLL::delete_element( ) {

}

void DLL::other_operations( ) {
    int input;
    cout << "Enter 1 to Sort." << endl;
    cout << "Enter 2 to Merge." << endl;
    cout << "Enter 3 to Update." << endl;
    cout << "Enter 4 to Reverse." << endl;
    cin >> input;

    if (input == 1) {



    }

    else if (input == 2) {

    }

    else if (input == 3) {

    }

    else if (input == 4) {

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