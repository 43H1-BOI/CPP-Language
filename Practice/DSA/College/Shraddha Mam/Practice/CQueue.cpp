#include<iostream>
using namespace std;

class CQueue{
    int* arr;
    int size , rear , front;
public:
    // CQueue( ){
    //     front = rear = -1;
    //     arr = new int[size];
    // }
    CQueue(int s){
        size = s;
        front = rear = -1;
        arr = new int[size];
    }
    ~CQueue( ){
        delete[ ] arr;
    }

    void insert(int);
    void delete_C( );
    void display( );
};


void CQueue::insert(int value){
    if (front == -1){
        front = rear = 0;
    }
    else if (rear == (front - 1) % (size - 1)){
        cout << "Queue is Full !" << endl;
        return;
    }
    else{
        rear = (rear + 1) % size;
    }
    arr[rear] = value;
}

void CQueue::delete_C( ){
    int ele;
    if (front == -1){
        cout << "C Queue is Empty" << endl;
        return;
    }
    else if (front == rear){
        ele = arr[front];
        front = rear = -1;
    }
    else{
        ele = arr[front];
        front = (front + 1) % size;
    }
    cout << "Deleted Element : " << ele << endl;
}

void CQueue::display( ){
    if (front == -1){
        cout << "CQueue Empty" << endl;
        return;
    }
    else if (front > rear){
        for (int i = front; i < size; i++){
            cout << arr[i] << " ";
            // cout << arr[i] << "->" << i << " ";
        }
        for (int i = 0; i <= rear; i++){
            cout << arr[i] << " ";
            // cout << arr[i] << "->" << i << " ";
        }
    }
    else{
        for (int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}



int main( ){
    CQueue c(4);

    c.display( );

    c.insert(5);
    c.display( );

    c.insert(4);
    c.insert(3);
    c.display( );

    c.delete_C( );
    c.display( );

    c.insert(2);
    c.insert(1);
    c.display( );

    return 0;
}