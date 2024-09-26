#include<iostream>
using namespace std;

class Stack{
private:
    int* arr;
    int top;
    int size;

public:
    Stack( ){ // Default
        top = -1;
    }

    Stack(int s){ // Parameterized
        this->size = s;
        arr = new int[s];
        top = -1;
    }

    ~Stack( ){ // Destructor
        delete[ ]arr;
        arr = NULL;
    }

    void push(int num);
    void pop( );
    int atTop( );
    bool isEmpty( );
    bool isFull( );
    int peek(int index);
    int count( );
    void change(int index , int value);
    void display( );


};

void Stack::push(int num){
    if (isFull( )){
        cout << "Stack Overflow !" << endl;
    }
    else{
        top++;
        arr[top] = num;
    }
}

void Stack::pop( ){
    if (isEmpty( )){
        cout << "Stack is Already Empty ." << endl;
    }
    else{
        arr[top] = 0;
        top--;
    }
}

int Stack::atTop( ){
    return arr[top];
}

bool Stack::isEmpty( ){
    if (top == -1){
        return true;
    }
    else
        return false;
}

bool Stack::isFull( ){
    if (top == size - 1){
        return true;
    }
    else
        return false;
}

int Stack::peek(int index){
    if (isEmpty( )){
        return 999; // If Empty
    }
    else if (index >= size){
        return 666; // If Out of Bound
    }
    else
        return arr[index];
}

int Stack::count( ){
    return (top + 1);
}

void Stack::change(int index , int value){
    arr[index] = value;
}

void Stack::display( ){
    if (isEmpty( )){
        cout << "Stack Underflow !" << endl;
        cout << "No Element Present in Stack" << endl;
    }
    else{
        for (int i = 0; i < size; i++){
            cout << peek(i) << "  ";
        }
    }
}

void ShowMenu( ){
    cout << "0. Show Menu " << endl;
    cout << "1. Push : Add Element at Last in Stack " << endl;
    cout << "2. Pop : Remove Last Element from Stack " << endl;
    cout << "3. Top : Get Last Element of Stack " << endl;
    cout << "4. isEmpty : Check if Stack is Empty " << endl;
    cout << "5. isFull : Check if Stack is Full " << endl;
    cout << "6. Count : Count No. of Elements in Stack " << endl;
    cout << "7. Peek : To get Specific Element from Stack by Index " << endl;
    cout << "8. Change Specific Element in Stack by Index " << endl;
    cout << "9. Display all Element from Stack " << endl;
    cout << "10. Exit Program " << endl;

}

int main( ){
    int choice1 = 0;
    int size , index , value;

    cout << "Program for Implementation of Stack using Arrays : \n" << endl;
    cout << "Enter Size of Stack : ";
    cin >> size;

    Stack s1(size);

    ShowMenu( );
    do{
        cout << endl;
        cout << "Enter Your Choice : ";
        cin >> choice1;
        cout << endl;

        switch (choice1){
            case 0:{
                ShowMenu( );
                break;
            }

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
                cout << "3. Top : Get Last Element of Stack " << endl;
                cout << "Last Element of Stack = ";
                cout << s1.atTop( );
                break;
            }

            case 4: {
                cout << "4. isEmpty : Check if Stack is Empty " << endl;
                if (s1.isEmpty( )){
                    cout << "Stack is Empty ." << endl;
                }
                else cout << "Stack is Not Empty ." << endl;
                break;
            }

            case 5: {
                cout << "5. isFull : Check if Stack is Full " << endl;
                if (s1.isFull( )){
                    cout << "Stack is Full ." << endl;
                }
                else cout << "Stack is Not Full ." << endl;
                break;
            }

            case 6: {
                cout << "6. Count : Count No. of Elements in Stack " << endl;
                cout << "Number of Element in Stack = ";
                cout << s1.count( );
                break;
            }

            case 7: {
                cout << "7. Peek : To get Specific Element from Stack by Index " << endl;
                cout << "Enter Index to Element from Stack = ";
                cin >> index;
                int ch = s1.peek(index);
                if (ch == 666){
                    cout << "Index out of Bound " << endl;
                }
                else if (ch == 999){
                    cout << "Stack is Emmpty" << endl;
                }
                else{
                    cout << "Element at " << index << " Index = " << ch;
                }
                break;
            }

            case 8: {
                cout << "8. Change Specific Element in Stack by Index " << endl;
                cout << "Enter Index to Element to change it : ";
                cin >> index;
                cout << "Enter Element to change at " << index << " Index with : ";
                cin >> value;
                s1.change(index , value);
                cout << "Element Change Successfully !" << endl;
                break;
            }

            case 9: {
                cout << "9. Display all Element from Stack " << endl;
                s1.display( );
                break;
            }

            case 10:{
                cout << "Exiting Program ." << endl;
                break;
            }

            default: {
                cout << "Invalid Choice !" << endl;
            }
        }
    } while (choice1 != 10);

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