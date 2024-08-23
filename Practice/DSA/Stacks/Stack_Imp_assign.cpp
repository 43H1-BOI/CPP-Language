#include<iostream>
using namespace std;

class Stack{
private:
    int* arr;
    int top;
    int size;

public:

    Stack(int s){ // Parameterized
        this->size = s;
        arr = new int[s];
        for (int i = 0; i < size; i++){
            arr[i] = 0;
        }
        top = -1;
    }

    ~Stack( ){ // Destructor
        delete[ ]arr;
        arr = NULL;
    }

    void push(int num);
    void pop( );
    void display( );


};

void Stack::push(int num){
    if (top == size - 1){
        cout << "Stack Overflow !" << endl;
    }
    else{
        top++;
        arr[top] = num;
    }
}

void Stack::pop( ){
    if (top == -1){
        cout << "Stack is Already Empty ." << endl;
    }
    else{
        arr[top] = 0;
        top--;
    }
}

void Stack::display( ){
    if (top == size - 1){
        cout << "Stack Underflow !" << endl;
        cout << "No Element Present in Stack" << endl;
    }
    else{
        for (int i = 0; i < size; i++){
            cout << arr[i] << "  ";
        }
    }
}


int main( ){
    int choice = 0;
    int size , value;

    cout << "Program for Implementation of Stack using Arrays : \n" << endl;
    cout << "Enter Size of Stack : ";
    cin >> size;

    Stack s1(size);

    do{
        cout << endl;
        cout << "1. Push : Add Element at Last in Stack " << endl;
        cout << "2. Pop : Remove Last Element from Stack " << endl;
        cout << "3. Display all Element from Stack " << endl;
        cout << "4. Exit Program " << endl << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << endl;

        switch (choice){
            case 1: {
                cout << "1. Push : Add Element at Last in Stack " << endl;
                cout << "Enter Element to Add in your Stack : ";
                cin >> value;
                s1.push(value);
                break;
            }

            case 2: {
                cout << "2. Pop : Remove Last Element from Stack " << endl;
                s1.pop( );
                break;
            }

            case 3: {
                cout << "3. Display all Element from Stack " << endl;
                s1.display( );
                break;
            }

            case 4:{
                cout << "Exiting Program ." << endl;
                break;
            }

            default: {
                cout << "Invalid Choice !" << endl;
            }
        }
    } while (choice != 4);

    return 0;
}
/*
        cout << "1. Push Element in Stack " << endl;
        cout << "2. Pop Element from Stack " << endl;
        cout << "3. Top Element of Stack " << endl;
        cout << "4. Check if Stack is Empty " << endl;
        cout << "5. Check if Stack is Full " << endl;
        cout << "6. Count No. of Elements in Stack " << endl;
        cout << "7. Get Specific Element from Stack by Index " << endl;
        cout << "8. Change Specific Element in Stack by Index " << endl;
        cout << "9. Display all Element from Stack " << endl;
        cout << "10. Exit Program " << endl;
        cout << "10. isFull : To check " << endl;
*/