#include <iostream>
using namespace std;

class Dequeue {
private:
    int* arr;
    int front , rear , size , capacity;

public:
    Dequeue(int capacity) {
        this->capacity = capacity;
        this->front = this->rear = -1;
        this->size = 0;
        this->arr = new int[capacity];
    }

    ~Dequeue( ) {
        delete[ ] arr;
    }

    bool isEmpty( ) {
        return size == 0;
    }

    bool isFull( ) {
        return size == capacity;
    }

    void insertFront(int data);

    void insertRear(int data);

    int deleteFront( );

    int deleteRear( );

    void display( );
};

void Dequeue::insertFront(int data) {
    if (isFull( )) {
        cout << "Dequeue Overflow" << endl;
        return;
    }
    if (isEmpty( )) {
        front = rear = 0;
        arr[front] = data;
        size++;
        return;
    }
    front = (front - 1 + capacity) % capacity;
    arr[front] = data;
    size++;
}

void Dequeue::insertRear(int data) {
    if (isFull( )) {
        cout << "Dequeue Overflow" << endl;
        return;
    }
    if (isEmpty( )) {
        front = rear = 0;
        arr[rear] = data;
        size++;
        return;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = data;
    size++;
}

int Dequeue::deleteFront( ) {
    if (isEmpty( )) {
        cout << "Dequeue Underflow" << endl;
        return -1;
    }
    int data = arr[front];
    if (front == rear) {
        front = rear = -1;
        size--;
        return data;
    }
    front = (front + 1) % capacity;
    size--;
    return data;
}

int Dequeue::deleteRear( ) {
    if (isEmpty( )) {
        cout << "Dequeue Underflow" << endl;
        return -1;
    }
    int data = arr[rear];
    if (front == rear) {
        front = rear = -1;
        size--;
        return data;
    }
    rear = (rear - 1 + capacity) % capacity;
    size--;
    return data;
}

void Dequeue::display( ) {
    if (isEmpty( )) {
        cout << "Dequeue is Empty" << endl;
        return;
    }
    int i = front;
    do {
        cout << arr[i] << " ";
        i = (i + 1) % capacity;
    } while (i != (rear + 1) % capacity);
    cout << endl;
}

int main( ) {
    int capacity;
    cout << "Enter Dequeue capacity: ";
    cin >> capacity;
    Dequeue dq(capacity);

    while (true) {
        cout << "\nDequeue Operations Menu:" << endl;
        cout << "1. Insert at Front" << endl;
        cout << "2. Insert at Rear" << endl;
        cout << "3. Delete from Front" << endl;
        cout << "4. Delete from Rear" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to insert at front: ";
                cin >> data;
                dq.insertFront(data);
                break;
            }
            case 2: {
                int data;
                cout << "Enter data to insert at rear: ";
                cin >> data;
                dq.insertRear(data);
                break;
            }
            case 3: {
                int data = dq.deleteFront( );
                if (data != -1)
                    cout << "Deleted from front: " << data << endl;
                break;
            }
            case 4: {
                int data = dq.deleteRear( );
                if (data != -1)
                    cout << "Deleted from rear: " << data << endl;
                break;
            }
            case 5:
            dq.display( );
            break;
            case 6:
            return 0;
            default:
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}