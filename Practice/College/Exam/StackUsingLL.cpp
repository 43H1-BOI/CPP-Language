#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    static int count;

    Node( ) {
        count++;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    Node(int data , Node* nex) {
        this->data = data;
        this->next = nex;
    }

    ~Node( ) {
        count--;
    }
};

int Node::count = 0;

class Stack {
private:
    Node* top;

public:
    Stack( ) {
        top = NULL;
    }
    void push(int data) {
        Node* newNode = new Node(data , top);
        top = newNode;
        cout << "Element Pushed : " << data << endl;
    }

    void pop( ) {
        if (top == NULL) {
            cout << "Stack is Empty." << endl;
            return;
        }
        Node* temp = top;
        cout << "Element Poped : " << temp->data << endl;
        top = top->next;
        delete temp;
    }

    void display( ) {
        if (top == NULL) {
            cout << "Stack is Empty!" << endl;
            return;
        }
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int getNodeCount( ) {
        return Node::count;
    }

    bool isEmpty( ) {
        return (top == NULL);
    }
};

int main( ) {

    Stack st;

    st.display( );
    st.push(5);
    st.push(3);
    st.push(2);
    st.push(1);

    st.display( );
    st.pop( );
    st.pop( );
    st.pop( );

    st.display( );
    return 0;
}