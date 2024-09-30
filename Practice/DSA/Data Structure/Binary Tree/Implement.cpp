#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    static int count;

    Node(int val) {
        data = val;
        left = 0; // NULL
        right = 0; // NULL
        count++;
    }

    ~Node( ) {
        count--;
    }
};

int Node::count = 0;

class BT { // Binary Tree
// private:
public:
    Node* root;

    BT( ) {
        root = 0; // NULL
    }

/*
    void addLeft(int val , int data){
        Node* newNode = new Node(val);
        if(root){ // Empty Tree
            root = newNode;
        } else {
            Node* temp = root;
            while(temp->left != 0){

            }

        }

    // void preorder(Node*& root); // Preorder : Root Left Right
    // void postorder(Node*& root); // Postorder : Left Right Root
    // void inorder(Node*& root); // Inorder : Left Root Right

};


void preorder(Node*& root) { // Preorder : Root Left Right
    if (root == NULL) {
        return;
    }
    cout << root->data << "  ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node*& root) { // Postorder : Left Right Root
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << "  ";
}

void inorder(Node*& root) { // Inorder : Left Root Right
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout << root->data << "  ";
}


int main( ) {
    BT* tree;
    tree->root = new Node(1);
    tree->root->left = new Node(2);
    tree->root->right = new Node(3);
    tree->root->left->left = new Node(4);
    tree->root->left->right = new Node(5);
    tree->root->right->left = new Node(6);
    tree->root->right->right = new Node(7);

    inorder(tree);
    cout << endl;

    preorder(tree);
    cout << endl;

    postorder(tree);
    cout << endl;

    return 0;
}
