#include<iostream.h>

class Node {
public:
    int data;
    Node* left;
    Node* right;
    static int count;

    Node(int val) {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
        count++;
    }

    ~Node( ) {
        count--;
    }
};

int Node::count = 0;

void preorder(Node* root) {
    if (root == nullptr) { return; }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == nullptr) { return; }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == nullptr) { return; }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node* insertNode(Node*& root , int val) { // Insert Fun returning Node*
    if (root == nullptr)
        return new Node(val);

    if (root->data < val)
        root->right = insertNode(root->right , val);

    else if (root->data > val)
        root->left = insertNode(root->left , val);

    return root;
}

Node* deleteNode(Node*& root , int val) {
    if (root == nullptr) { // node is nullptr
        // cout << "BST is Empty !" << endl;
        return nullptr;
    }

    if (root->data > val) { // value will be on left side
        root->left = deleteNode(root->left , val);
    }
    else if (root->data < val) { // value will be on right side
        root->right = deleteNode(root->right , val);
    }
    else if (root->data == val) { // value found
        if (root->left == nullptr && root->right == nullptr) { // is leaf node
            Node* temp = root;
            delete temp;
            return nullptr;

        }
        else if (root->left == nullptr) { // right node contains something
            Node* temp = root->right;
            delete root;
            return temp;

        }
        else if (root->right == nullptr) { // left node contains something
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left != nullptr && root->right != nullptr) {
            int minRight = minElement(root->right);
            root->data = minRight;
            deleteNode(root->right , minRight);

        }
    }
    return root;
}

int main( ) {

    Node* root = nullptr;

    root = insertNode(root , 33);
    root = insertNode(root , 30);
    root = insertNode(root , 60);
    root = insertNode(root , 10);
    root = insertNode(root , 70);
    root = insertNode(root , 1);

    if (search(root , 70)) {
        cout << "Element Found" << endl;
    }
    else {
        cout << "Element Not Found" << endl;
    }

    cout << "Postorder : ";
    postorder(root);
    cout << endl;

    cout << "Preorder : ";
    preorder(root);
    cout << endl;

    cout << "Inorder : ";
    inorder(root);
    cout << endl;

    deleteNode(root , 30);

    cout << "Inorder : ";
    inorder(root);
    cout << endl;
    return 0;
}
