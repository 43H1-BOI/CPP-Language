// 9. Write a menu driven program to implement Priority queue.
#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

class PriorityQueue {
public:
    int arr[MAX_SIZE];
    int size;

    PriorityQueue( );
    bool isEmpty( );
    bool isFull( );
    void insert(int val , int priority);
    int deleteMax( );
    void display( );
};

PriorityQueue::PriorityQueue( ) {
    size = 0;
}

bool PriorityQueue::isEmpty( ) {
    return size == 0;
}

bool PriorityQueue::isFull( ) {
    return size == MAX_SIZE;
}

void PriorityQueue::insert(int val , int priority) {
    if (isFull( )) {
        cout << "Queue is full." << endl;
        return;
    }

    int i = size;
    while (i > 0 && (arr[i - 1] % 10) < priority) {
        arr[i] = arr[i - 1];
        i--;
    }

    arr[i] = val * 10 + priority;
    size++;
    cout << "Inserted: " << val << " with priority " << priority << endl;
}

int PriorityQueue::deleteMax( ) {
    if (isEmpty( )) {
        cout << "Queue is empty." << endl;
        return -1;
    }
    int max = arr[0] / 10;
    cout << "Deleted: " << max << endl;
    for (int i = 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }
    size--;
    return max;
}

void PriorityQueue::display( ) {
    if (isEmpty( )) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] / 10 << " (" << arr[i] % 10 << ")" << " ";
    }
    cout << endl;
}

int main( ) {
    PriorityQueue q;
    int choice , val , priority;

    do {
        cout << "Priority Queue Operations:" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete Max" << endl;
        cout << "3. Display" << endl;
        cout << "4. Check Empty" << endl;
        cout << "5. Check Full" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            cout << "Enter value: ";
            cin >> val;
            cout << "Enter priority: ";
            cin >> priority;
            q.insert(val , priority);
            break;
            case 2:
            q.deleteMax( );
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

    return 0;
}

/*
Here's an explanation of the Priority Queue and its functions:


Definition:

A Priority Queue is a type of queue where elements are ordered based on their priority. Each element in the queue has a priority associated with it, and the element with the highest priority is served first.


Working of Priority Queue:

1. Elements are inserted into the queue with a priority.
2. The element with the highest priority is placed at the front of the queue.
3. When an element is deleted, the element with the highest priority is removed.
4. The priority of each element determines its position in the queue.


Functions:

1. *PriorityQueue::PriorityQueue()*

- Initializes the Priority Queue.
- Sets the size of the queue to 0.

2. *bool PriorityQueue::isEmpty()*

- Checks if the queue is empty.
- Returns true if the size of the queue is 0, false otherwise.

3. *bool PriorityQueue::isFull()*

- Checks if the queue is full.
- Returns true if the size of the queue is equal to MAX_SIZE, false otherwise.

4. *void PriorityQueue::insert(int val, int priority)*

- Inserts an element into the queue with a given priority.
- Checks if the queue is full.
- If not full, inserts the element at the correct position based on its priority.

5. *int PriorityQueue::deleteMax()*

- Removes the element with the highest priority from the queue.
- Checks if the queue is empty.
- If not empty, removes the element at the front of the queue.

6. *void PriorityQueue::display()*

- Displays the elements in the queue.
- Checks if the queue is empty.
- If not empty, displays each element along with its priority.


Example Walkthrough:

Suppose we have a Priority Queue with MAX_SIZE = 5.


1. Insert(10, 2)
    - Queue: [10 (2)]
2. Insert(20, 3)
    - Queue: [20 (3), 10 (2)]
3. Insert(30, 1)
    - Queue: [20 (3), 10 (2), 30 (1)]
4. DeleteMax()
    - Removed: 20 (3)
    - Queue: [10 (2), 30 (1)]
5. Insert(40, 4)
    - Queue: [40 (4), 10 (2), 30 (1)]


Note: The numbers in parentheses represent the priority of each element.


This example demonstrates how the Priority Queue maintains the order of elements based on their priority.
*/