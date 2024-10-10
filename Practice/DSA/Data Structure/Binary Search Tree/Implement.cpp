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

void preorder(Node* root) {
    if (root == NULL) { return; }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == NULL) { return; }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) { return; }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


Node* insertByPtr(Node*& root , int val) { // Insert Fun returning Node*
    if (root == NULL)
        return new Node(val);

    if (root->data < val)
        root->right = insertByPtr(root->right , val);

    else if (root->data > val)
        root->left = insertByPtr(root->left , val);

    return root;

    /* Usage of Above Function in Main()

    // For Fun() returning Node*
    // root = insertByPtr(root , 33);
    // root = insertByPtr(root , 33);
    // root = insertByPtr(root , 60);
    // root = insertByPtr(root , 60);
    // root = insertByPtr(root , 10);
    // root = insertByPtr(root , 10);

    */
}

/* // Not Working (will fix this later)
void insert(Node*& root , int val) {
    if (root == NULL)
        return;

    if (root->data < val)
        insert(root->right , val);

    else if (root->data > val)
        insert(root->left , val);

}
*/

/*
Node* insertNode(int val , Node*& root) {
    Node* newNode = new Node(val);
    if (root == NULL) {
        root = newNode;
        return;
    }
    Node* temp = root;
    while (temp->left != NULL || temp->right != NULL) {
        if (temp->data > val) {

        }
        else if (temp->data < val) {

        }



        if (temp->left == NULL) {
            if (val >= temp->data) {
                temp->right = newNode;
            }
        }
        else if (temp->right != NULL) {
            if (temp->data < val) {
                temp->left = newNode;
            }
        }
        else {
            temp = temp->left;
        }


    }

}
*/

int search(Node*& root , int element) {
    if (root == NULL)
        return 0;
    else if (root->data == element) // element found
        return 1;
    else if (root->data > element) // element is smaller , on the left side
        return search(root->left , element);
    else // element is bigger , on the right side
        return search(root->right , element);
}

int minElement(Node*& root) {
    if (root == NULL) { // Empty
        return -1;
    }
    Node* curr = root;

    while (curr->left != NULL) {
        curr = curr->left;
    }

    return curr->data;
}

int maxElement(Node*& root) {
    if (root == NULL) { // Empty
        return -1;
    }
    Node* curr = root;

    while (curr->right != NULL) {
        curr = curr->right;
    }

    return curr->data;
}

void deleteNode(Node* root , int val) {
    if (root == NULL) {
        // cout << "BST is Empty !" << endl;
        return;
    }
    else if (val == root->data) {
        Node* temp = root;
        root == NULL;
        delete temp;
    }
    else if (val < root->data) {
        deleteNode(root->left , val);
    }
    else if (val > root->data) {
        deleteNode(root->right , val);
    }
}

int main( ) {

    Node* root = NULL;

    root = insertByPtr(root , 33);
    root = insertByPtr(root , 30);
    root = insertByPtr(root , 60);
    root = insertByPtr(root , 10);
    root = insertByPtr(root , 70);
    root = insertByPtr(root , 1);

    if (search(root , 70)) {
        cout << "Element Found" << endl;
    }
    else {
        cout << "Element Not Found" << endl;
    }

/* // For fun() returning nothing
    insert(root , 30);
    insert(root , 30);
    insert(root , 20);
    insert(root , 20);
    insert(root , 50);
    insert(root , 50);
*/

/* Starting Insertion(Manual)
    // Node* root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
*/

    cout << "Postorder : ";
    postorder(root);
    cout << endl;

    cout << "Preorder : ";
    preorder(root);
    cout << endl;

    cout << "Inorder : ";
    inorder(root);
    cout << endl;

    cout << "Min Element : " << minElement(root) << endl;
    cout << "Max Element : " << maxElement(root) << endl;

    deleteNode(root , 70);

    cout << "Inorder : ";
    inorder(root);
    cout << endl;
    return 0;
}
