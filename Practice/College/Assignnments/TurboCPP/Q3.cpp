#include<iostream.h>

class Stack {
private:
    int* arr;
    int top;
    int size;

public:
    Stack(int s) { // Parameterized
        this->size = s;
        arr = new int[s];
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
        top = -1;
    }

    ~Stack( ) { // Destructor
        delete[ ]arr;
        arr = 0;
    }

    void push(int num);
    void pop( );
    void display( );
};

void Stack::push(int num) {
    if (top == size - 1) {
        cout << "Stack Overflow !" << endl;
    }
    else {
        top++;
        arr[top] = num;
    }
}

void Stack::pop( ) {
    if (top == -1) {
        cout << "Stack is Already Empty ." << endl;
    }
    else {
        cout << "Last Element Removed from Stack " << endl;
        arr[top] = 0;
        top--;
    }
}

void Stack::display( ) {
    if (top == -1) {
        cout << "Stack Underflow !" << endl;
        cout << "No Element Present in Stack" << endl;
    }
    else {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << "  ";
        }
    }
    cout << endl;
}


void main( ) {
    int choice = 0;
    int size , value , number;

    cout << "Program for Implementation of Stack using Arrays : \n" << endl;
    cout << "Enter Size of Stack : ";
    cin >> size;

    Stack s1(size);

    do {
        cout << endl;
        cout << "1. Push : Add Element at Last in Stack " << endl;
        cout << "2. Pop : Remove Last Element from Stack " << endl;
        cout << "3. Display all Element from Stack " << endl;
        cout << "4. Exit Program " << endl << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1: {
                cout << "Enter Number of Elements to Push : ";
                cin >> number;
                cout << "Enter " << number << " Element to Add in your Stack : ";
                for (int i = 0; i < number; i++) {
                    cin >> value;
                    s1.push(value);
                }
                break;
            }

            case 2: {
                cout << "Enter Number of Elements to Pop : ";
                cin >> number;
                for (int i = 0; i < number; i++) {
                    s1.pop( );
                }
                break;
            }

            case 3: {
                cout << "Displaying all Element from Stack : " << endl;
                s1.display( );
                break;
            }

            case 4: {
                cout << "Exiting Program ." << endl;
                break;
            }

            default: {
                cout << "Invalid Choice !" << endl;
            }
        }
    } while (choice != 4);
}