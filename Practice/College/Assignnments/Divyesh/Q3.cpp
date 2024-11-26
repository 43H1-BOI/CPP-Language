#include <iostream>
using namespace std;

/*
3. Write program to implement stack-using array with following operations :
a. Push
b. Pop
c. display
*/

class Stacks
{
    int array[10] , top = -1;
public:
    void push(int a);
    int pop( );
    void display( );
    Stacks( ) {
        for (int i = 0; i < 10; i++) {
            array[i] = -1;
        }
    }
};

void Stacks::push(int a) {
    int value = a;
    if (top >= 9) {
        cout << "Stack is Full" << endl;
        return;
    }
    top++;
    array[top] = value;
    return;
}

int Stacks::pop( ) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    int temp = array[top];
    array[top] = -1;
    top--;
    return temp;
}

void Stacks::display( ) {
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " " << endl;
    }
    return;
}

int main( ) {
    Stacks s1;
    s1.push(5);
    s1.push(10);
    s1.push(15);
    s1.push(20);
    s1.display( );
    cout << "popped element is: " << s1.pop( ) << endl;
    cout << "popped element is: " << s1.pop( ) << endl;
    cout << "popped element is: " << s1.pop( ) << endl;
    cout << "popped element is: " << s1.pop( ) << endl;
    s1.display( );
    return 0;
}