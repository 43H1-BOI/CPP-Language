#include<iostream>
using namespace std;

class CircularQueue{
private:
    int* arr;
    int front , rare , size;

public:
    CircularQueue( ){ }

    CircularQueue(int size){
        this->size = size;
        arr = new int[size];
        front = rare = -1;
    }

    ~CircularQueue( ){
        delete[ ] arr;
        arr = NULL;
    }

    void enqueue(int value){
        if (isFull( )){
            cout << "\nCircular Queue is Full !" << endl;
            return;
        }
        else if (front == -1 && rare == -1){
            front = rare = 0;
        }
        else{
            rare++;
        }
        arr[rare] = value;
    }

    void dequeue( ){
        if (isEmpty( )){
            cout << "\nNo Element in Circular Queue ." << endl;
            return;
        }
        else if (front == rare){
            front = rare = -1;
        }
        else{
            front = (front + 1) % size;
        }
    }

    bool isFull( ){
        if (front == (rare + 1) % size){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty( ){
        if (rare == -1 && front == -1){
            return true;
        }
        else{
            return false;
        }
    }

    void display( ){
        if (isEmpty( )){
            cout << "Circular Queue is Empty." << endl;
        }
        else{
            for (int i = front; i <= rare; i++){
                cout << arr[i] << "  ";
            }
        }
    }
};


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

    CircularQueue Q(size);

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