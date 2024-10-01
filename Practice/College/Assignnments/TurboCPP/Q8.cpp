//8. Write a menu driven program to implement Circular queue.

#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

class CircularQueue {
public:
    int arr[MAX_SIZE];
    int front , rear;

    CircularQueue( ) {
        front = rear = -1;
    }

    bool isEmpty( ) {
        return front == -1;
    }

    bool isFull( ) {
        return (rear + 1) % MAX_SIZE == front;
    }

    void enqueue(int val);
    int dequeue( );
    void display( );
};

void CircularQueue::enqueue(int val) {
    if (isFull( )) {
        cout << "Queue is full." << endl;
        return;
    }
    if (isEmpty( )) front = 0;
    rear = (rear + 1) % MAX_SIZE;
    arr[rear] = val;
    cout << "Enqueued: " << val << endl;
}

int CircularQueue::dequeue( ) {
    if (isEmpty( )) {
        cout << "Queue is empty." << endl;
        return -1;
    }
    int ans = arr[front];
    if (front == rear) front = rear = -1;
    else front = (front + 1) % MAX_SIZE;
    cout << "Dequeued: " << ans << endl;
    return ans;
}

void CircularQueue::display( ) {
    if (isEmpty( )) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue: ";
    int temp = front;
    do {
        cout << arr[temp] << " ";
        temp = (temp + 1) % MAX_SIZE;
    } while (temp != (rear + 1) % MAX_SIZE);
    cout << endl;
}

void main( ) {
    CircularQueue q;
    int choice , value;

    do {
        cout << "Circular Queue Operations:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Check Empty" << endl;
        cout << "5. Check Full" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;
            case 2:
            q.dequeue( );
            break;
            case 3:
            q.display( );
            break;
            case 4:
            cout << (q.isEmpty( ) ? "Queue is empty." : "Queue is not empty.") << endl;
            break;
            case 5:
            cout << (q.isFull( ) ? "Queue is full." : "Queue is not full.") << endl;
            break;
            case 6:
            cout << "Exiting..." << endl;
            break;
            default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
}