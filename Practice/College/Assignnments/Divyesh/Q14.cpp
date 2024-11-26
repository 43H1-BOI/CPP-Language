#include<iostream>
using namespace std;

/*
14. Write a menu driven program to implement Circular Linked List.
*/

struct node {
    int d;
    node* l;
};

class CLL {
    node* end;
public:
    CLL( ) {
        end = NULL;
    }
    void insert( );
    int count( );
    void add_beg( );
    void append( );
    void delete_last( );
    void delete_beg( );
    void delete_location( );
    void display( );
};

int CLL::count( ) {
    if (end == NULL) {
        return 0;
    }
    int c = 1;
    node* temp = end->l;
    while (temp != end) {
        temp = temp->l;
        c++;
    }
    return c;
}

void CLL::add_beg( ) {
    node* temp = new node;
    int v;
    cout << "Enter data to insert from beginning: ";
    cin >> v;
    temp->d = v;
    if (end == NULL) {
        end = temp;
        end->l = temp;
        return;
    }
    temp->l = end->l;
    end->l = temp;
}

void CLL::append( ) {
    node* temp = new node;
    int v;
    cout << "Enter data to insert from end: ";
    cin >> v;
    temp->d = v;
    if (end == NULL) {
        end = temp;
        end->l = temp;
        return;
    }
    temp->l = end->l;
    end->l = temp;
    end = temp;
}

void CLL::delete_last( ) {
    if (end == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    else if (end->l == end) {
        delete end;
        end = NULL;
    }
    else {
        node* t = end->l;
        while (t->l != end) {
            t = t->l;
        }
        t->l = end->l;
        delete end;
        end = t;
    }
    display( );
}

void CLL::delete_beg( ) {
    if (end == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    else if (end->l == end) {
        delete end;
        end = NULL;
    }
    else {
        node* t = end->l;
        end->l = t->l;
        delete t;
    }
    display( );
}

void CLL::insert( ) {
    int l , data;
    cout << "Enter location where you want to inser the data: ";
    cin >> l;
    if (count( ) == 0 && l == 1) {
        add_beg( );
    }
    else if (l > (count( ) + 1) || (count( ) == 0 && l != 1)) {
        cout << "Elements cannot be added." << endl;
        return;
    }
    else if (l == (count( ) + 1)) {
        append( );
    }
    else {
        cout << "Enter the data you want to insert at that location: ";
        cin >> data;
        node* t = end->l;
        node* temp = new node;
        temp->d = data;
        for (int i = 1; i < (l - 1); i++) {
            t = t->l;
        }
        temp->l = t->l;
        t->l = temp;
    }
}


void CLL::delete_location( ) {
    int loc;
    cout << "Enter location from where yiu want to delete the data: ";
    cin >> loc;

    if (loc < 1 || loc > count( )) {
        cout << "Invalid location." << endl;
        return;
    }
    if (loc == 1) {
        delete_beg( );
    }
    else if (loc == count( )) {
        delete_last( );
    }
    else {
        node* temp = end->l;
        node* prev = NULL;
        for (int i = 1; i < loc; i++) {
            prev = temp;
            temp = temp->l;
        }
        prev->l = temp->l;
        delete temp;
        display( );
    }
}

void CLL::display( ) {
    int x = count( );
    if (x == 0) {
        cout << "Linklist is empty" << endl;
        return;
    }
    node* temp = end->l;
    for (int i = 1; i <= x; i++) {
        cout << temp->d << " ";
        temp = temp->l;
    }
    cout << endl;
}


int main( ) {
    CLL ob1;
    int input;
    int z = 1;
    while (z != 0) {
        cout << "Press 1 to Add Element at Beginning." << endl;
        cout << "Press 2 to Add Element at a location." << endl;
        cout << "Press 3 Append Element." << endl;
        cout << "Press 4 to Delete an Element from beginning." << endl;
        cout << "Press 5 to Delete an Element from a given location." << endl;
        cout << "Press 6 to Delete an Element from last." << endl;
        cout << "Press 7 to count number of Elements in the list." << endl;
        cout << "Press 8 to Display the Lists." << endl;
        cout << "Press 9 to Exit the Program" << endl;
        cin >> input;

        switch (input) {
            case 1:
            ob1.add_beg( );
            break;
            case 2:
            ob1.insert( );
            break;
            case 3:
            ob1.append( );
            break;
            case 4:
            ob1.delete_beg( );
            break;
            case 5:
            ob1.delete_location( );
            break;
            case 6:
            ob1.delete_last( );
            break;
            case 7:
            cout << "Total elements in list are: " << ob1.count( );
            break;
            case 8:
            ob1.display( );
            break;
            case 9:
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