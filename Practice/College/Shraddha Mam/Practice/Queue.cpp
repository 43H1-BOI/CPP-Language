#include<iostream>
using namespace std;

// #define MAX_SIZE 10;

class Queue{
    int arr[10];
    int front , rear , size;

public:
    Queue( ){
        front = rear = -1;
        size = 10;
        // size = MAX_SIZE;
    }

    void insert(int);
    void delete_Q( );
    void display( );
};

void Queue::insert(int value){
    if (rear == size - 1){
        cout << "Queue is Full !" << endl;
        return;
    }
    else if (rear == -1){
        front = rear = 0;
    }
    arr[rear] = value;
    rear++;
}
void Queue::delete_Q( ){
    int ele;
    if (front == -1){
        cout << "Queue Underflow !" << endl;
        return;
    }
    else if (front == rear){
        ele = arr[rear];
        front = rear = -1;
    }
    else{
        ele = arr[front];
        front++;
    }
    cout << "Deleted Element : " << ele << endl;
}
void Queue::display( ){
    if (front == rear){
        cout << "Queue is Empty !" << endl;
    }
    else{
        for (int i = front; i < rear; i++){
            cout << arr[i] << "  ";
        }
        cout << endl;
    }
}

int main( ){
    Queue Q;

    Q.display( );

    Q.insert(2);
    Q.insert(24);
    Q.insert(246);
    Q.insert(2468);

    Q.display( );
    Q.delete_Q( );
    Q.delete_Q( );
    Q.delete_Q( );
    Q.delete_Q( );

    Q.display( );
    return 0;
}
