#include <iostream.h>

// 4. Write a menu driven program to implement stack using linked list.

// Node class
class Node {
public:
    int data;
    Node* next;
    static int count;

    Node(int d) {
        // Constructor
        data = d;
        next = 0;
        count++;
    }

    ~Node( ) {
        // Destructor
        count--;
    }
};

int Node::count = 0;

// Stack class
class Stack {
private:
    Node* top;
public:
    Stack( ) {
        top = 0;
    }

    // Push element onto stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << "Element pushed: " << value << endl;
    }

    // Pop element from stack
    void pop( ) {
        if (top == 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << "Element popped: " << temp->data << endl;
        delete temp;
    }

    // Display stack elements
    void display( ) {
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp != 0) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Check if stack is empty
    bool isEmpty( ) {
        return top == 0;
    }

    // Get node count
    int getNodeCount( ) {
        return Node::count;
    }
};

void main( ) {
    Stack stack;
    int choice , value;

    do {
        cout << "Stack Operations" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Check Empty" << endl;
        cout << "5. Get Node Count" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value);
            break;
            case 2:
            stack.pop( );
            break;
            case 3:
            stack.display( );
            break;
            case 4:
            if (stack.isEmpty( )) {
                cout << "Stack is empty" << endl;
            }
            else {
                cout << "Stack is not empty" << endl;
            }
            break;
            case 5:
            cout << "Node count: " << stack.getNodeCount( ) << endl;
            break;
            case 6:
            cout << "Exiting..." << endl;
            break;
            default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
}