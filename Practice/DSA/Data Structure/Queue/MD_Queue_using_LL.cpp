#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    static int count;

    Node( ) { }
    Node(int val) {
        data = val;
        next = NULL;
        count++;
    }
    ~Node( ) {
        count--;
    }
};

int Node::count = 0;

void enqueue(Node*& front , Node*& rear , int val) {
    Node* newNode = new Node(val);
    if (front == NULL) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void dequeue(Node*& front , Node*& rear) {
    if (front == NULL) {
        cout << "Queue is Empty , Unable to Dequeue" << endl;
    }
    else {
        Node* temp = front;
        front = front->next;
        cout << "Dequeued : " << temp->data << endl;
        if (front == NULL) {
            rear = NULL;
        }
        delete temp;
    }
}

void display(Node*& front , Node*& rear) {
    if (front == NULL) {
        cout << "Queue is Empty !" << endl;
        return;
    }

    Node* temp = front;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != NULL);
    cout << "\nTotal Elements : " << Node::count << endl;
}

int getCount( ) {
    return Node::count;
}

void menu( ) {
    cout << "\nQueue Operations Menu:" << endl;
    cout << "0. Show Menu" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Display Queue" << endl;
    cout << "4. Get Count" << endl;
    cout << "5. Exit" << endl;
}

int main( ) {
    Node* front , * rear;
    front = rear = NULL;
    int choice , val , num;

    menu( );
    do {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 0:
            menu( );
            break;

            case 1:
            cout << "Enter number of values to enqueue: ";
            cin >> num;
            while (num != 0) {
                cout << "Enter Value to enqueue : ";
                cin >> val;
                enqueue(front , rear , val);
                num--;
            }
            break;

            case 2:
            cout << "Enter number of values to dequeue: ";
            cin >> num;
            while (num != 0) {
                dequeue(front , rear);
                num--;
            }
            break;

            case 3:
            display(front , rear);
            break;

            case 4:
            cout << "Total Elements: " << getCount( ) << endl;
            break;

            case 5:
            cout << "Exiting Program " << endl;
            break;

            default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

