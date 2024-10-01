// 7. Write a menu driven program to implement a queue using arrays.
#include <iostream.h>

#define MAX_SIZE 100

class Queue {
public:
    int front;
    int rear;
    int arr[MAX_SIZE];

    Queue( ) : front(-1) , rear(-1) { }

    bool isEmpty( ) {
        return front == -1 || front > rear;
    }

    bool isFull( ) {
        return rear == MAX_SIZE - 1;
    }

    void enqueue(int val);
    int dequeue( );
    void display( );
};

void Queue::enqueue(int val) {
    if (isFull( )) {
        cout << "Queue is full" << endl;
        return;
    }
    if (isEmpty( ))
        front = 0;
    rear++;
    arr[rear] = val;
    cout << "Enqueued: " << val << endl;
}

int Queue::dequeue( ) {
    if (isEmpty( )) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    int ans = arr[front];
    front++;
    if (isEmpty( ))
        front = rear = -1;
    cout << "Dequeued: " << ans << endl;
    return ans;
}
void Queue::display( ) {
    if (isEmpty( )) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue: ";
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void main( ) {
    Queue q;
    int choice , value;

    do {
        cout << "Queue Operations" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Check Empty" << endl;
        cout << "5. Check Full" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            cout << "Enter value to enqueue: ";
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
            if (q.isEmpty( )) {
                cout << "Queue is empty." << endl;
            }
            else {
                cout << "Queue is not empty." << endl;
            }
            break;
            case 5:
            if (q.isFull( )) {
                cout << "Queue is full." << endl;
            }
            else {
                cout << "Queue is not full." << endl;
            }
            break;
            case 6:
            cout << "Exiting..." << endl;
            break;
            default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
}