#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    static int count;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
        count++;
    }

    ~Node( ) {
        count--;
    }
};

int Node::count = 0;

Node* buildTree(Node*& root) {
    int data;

    cout << "Enter data in node : ";
    cin >> data;

    root = new Node(data);

    //  Base Condition
    if (data == -1) {
        return NULL;
    }

    cout << "Enter data in left node of " << root->data << " : " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data in right node of " << root->data << " : " << endl;
    root->right = buildTree(root->right);

    return root;
}

void preOrder(Node* root) {
    if (root == NULL) return;
    // Parent Left Right
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root) {
    if (root == NULL) return;
    // Left Right Parent
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void inOrder(Node* root) {
    if (root == NULL) return;
    // Left Parent Right
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main( ) {
    Node* root = NULL;

    root = buildTree(root);


    cout << "Postorder : ";
    postOrder(root);
    cout << endl;

    cout << "Preorder : ";
    preOrder(root);
    cout << endl;

    cout << "Inorder : ";
    inOrder(root);
    cout << endl;


    return 0;
}