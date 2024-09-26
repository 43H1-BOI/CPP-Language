#include<iostream>
using namespace std;

class Queue{
private:
    int* arr;
    int front , rare , size;

public:
    Queue( ){ } // Default Cons.

    Queue(int size){ // Parameterized Cons.
        arr = new int[size];
        this->size = size;
        front = -1;
        rare = -1;
    }

    ~Queue( ){
        delete[ ] arr;
        arr = NULL;
    }

    void enqueue(int value); // To add value from rare side
    void dequeue( ); // To remove value from front
    bool isFull( ); // To check if Queue is Full
    bool isEmpty( ); // To check if Queue is Empty
    void display( ); // To Display elements of Queue
};

void Queue::enqueue(int value){
    if (isEmpty( )){
        front++;
        rare++;
        arr[front] = value;
    }
    else if (isFull( )){
        cout << "\nQueue is Full !" << endl;
    }
    else{
        rare++;
        arr[rare] = value;
    }
}

void Queue::dequeue( ){
    if (isEmpty( )){
        cout << "\nQueue is Already Empty ! " << endl;
        return;
    }
    else if (front == rare){
        front--;
        rare--;
    }
    else{
        front++;
        size++;
    }
}

bool Queue::isFull( ){
    if (rare == size - 1)
        return true;
    else
        return false;
}

bool Queue::isEmpty( ){
    if (front == -1 && rare == -1)
        return true;
    else
        return false;
}

void Queue::display( ){
    if (isEmpty( )){
        cout << "Queue is Empty." << endl;
    }
    else{
        for (int i = front; i <= rare; i++){
            cout << arr[i] << "  ";
        }
    }
}

void ShowMenu( ){
    cout << endl;
    cout << "Menu : " << endl;
    cout << "0. Show Menu " << endl;
    cout << "1. enqueue() : Add Element at End of the Queue " << endl;
    cout << "2. dequeue() : Remove Element from Front of the Queue " << endl;
    cout << "3. isFull() : Check if Queue is Full or Not " << endl;
    cout << "4. isEmpty() : Check if Queue is Empty or Not " << endl;
    cout << "5. Display all Element of Queue " << endl;
    cout << "6. Exit Program " << endl;
}

int main( ){

    int choice = 0;
    int size , value;

    cout << "\nProgram for Implementation of Queue using Arrays : \n" << endl;
    cout << "Enter Size of Queue : ";
    cin >> size;

    Queue Q(size);

    ShowMenu( );

    do{
        cout << endl;
        cout << "\nEnter Your Choice : ";
        cin >> choice;
        cout << endl;

        switch (choice){
            case 0:{
                ShowMenu( );
                break;
            }

            case 1: {
                cout << "1. enqueue() : Add Element at End of the Queue " << endl;
                cout << "Enter Element to Add in your Queue : ";
                cin >> value;
                Q.enqueue(value);
                break;
            }

            case 2: {
                cout << "2. dequeue() : Remove Element from Front of the Queue " << endl;
                Q.dequeue( );
                break;
            }

            case 3: {
                cout << "3. isFull() : Check if Queue is Full or Not " << endl;
                if (Q.isFull( ))
                    cout << "Queue is Full ." << endl;
                else
                    cout << "Queue is Not Full ." << endl;
                break;
            }

            case 4:{
                cout << "4. isEmpty() : Check if Queue is Empty or Not " << endl;
                if (Q.isEmpty( ))
                    cout << "Queue is Empty ." << endl;
                else
                    cout << "Queue is Not Empty ." << endl;
                break;
            }

            case 5: {
                cout << "5. Display all Element of Queue " << endl;
                Q.display( );
                break;
            }

            case 6:{
                cout << "Exiting Program ." << endl;
                break;
            }

            default: {
                cout << "Invalid Choice !" << endl;
            }
        }
    } while (choice != 6);

    return 0;
}