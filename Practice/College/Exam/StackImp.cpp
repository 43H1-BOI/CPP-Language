#include<iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int size;

public:
    Stack( ) { }
    Stack(int s) {
        this->size = s;
        arr = new int[size];
        top = -1;
    }

    ~Stack( ) {
        delete[ ] arr;
        arr = nullptr;
    }

    void push(int num) {
        if (size == top + 1) {
            cout << "Stack Overflow !" << endl;
        }
        else {
            top++;
            arr[top] = num;
        }
    }

    void pop( ) {
        if (top == -1) {
            cout << "Stack is Empty !" << endl;
        }
        else {
            arr[top] = 0;
            top--;
        }
    }

    void display( ) {
        if (top == -1) {
            cout << "Stack is Empty ! " << endl;
        }
        else {
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main( ) {
    Stack st(8);

    st.display( );
    st.push(4);
    st.push(3);
    st.push(6);
    st.push(8);
    st.push(10);

    st.display( );
    st.pop( );
    st.pop( );
    st.pop( );

    st.display( );
    return 0;
}
