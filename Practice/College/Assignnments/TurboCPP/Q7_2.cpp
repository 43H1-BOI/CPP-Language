// C++ Program to implement a queue using array
#include <iostream>
using namespace std;

// Defining the max size of the queue
#define MAX_SIZE 100

// Implement the queue data structure
class Queue {
public:
    int front;
    int rear;
    int arr[MAX_SIZE];

    // Initializing pointers in the constructor
    Queue( ) : front(-1) , rear(-1) { }

    // Function to check if the queue is empty or not
    bool isEmpty( ) {
        return front == -1 || front > rear;
    }

    // Function to check if the queue is full or not
    bool isFull( ) {
        return rear == MAX_SIZE - 1;
    }

    // Function to get the front element of the queue
    int getFront( ) {
        if (isEmpty( )) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    // Function to get the rear element of the queue
    int getRear( ) {
        if (isEmpty( )) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    // Function to enqueue elements from the queue
    void enqueue(int val) {
        // Check overflow condition
        if (isFull( )) {
            cout << "Queue is full" << endl;
            return;
        }
        // If queue is empty, set front to 0
        if (isEmpty( ))
            front = 0;
        rear++;
        arr[rear] = val;
        cout << "Enqueued: " << val << endl;
    }

    // Function to dequeue elements from the queue
    int dequeue( ) {
        // Check underflow condition
        if (isEmpty( )) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        front++;
        // If queue becomes empty, reset both pointers
        if (isEmpty( ))
            front = rear = -1;
        cout << "Dequeued: " << ans << endl;
        return ans;
    }

    // Display function to print the queue
    void display( ) {
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
};

int main( ) {
    // Created Queue of size 5
    Queue q;
    int choice , value;

    do {
        cout << "Queue Operations" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Get Front" << endl;
        cout << "5. Get Rear" << endl;
        cout << "6. Check Empty" << endl;
        cout << "7. Check Full" << endl;
        cout << "8. Exit" << endl;
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
            cout << "Front element: " << q.getFront( ) << endl;
            break;
            case 5:
            cout << "Rear element: " << q.getRear( ) << endl;
            break;
            case 6:
            if (q.isEmpty( )) {
                cout << "Queue is empty." << endl;
            }
            else {
                cout << "Queue is not empty." << endl;
            }
            break;
            case 7:
            if (q.isFull( )) {
                cout << "Queue is full." << endl;
            }
            else {
                cout << "Queue is not full." << endl;
            }
            break;
            case 8:
            cout << "Exiting..." << endl;
            break;
            default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}