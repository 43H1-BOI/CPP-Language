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

Node* insertNode(Node*& root , int val) { // Insert Fun returning Node*
    if (root == NULL)
        return new Node(val);

    if (root->data < val)
        root->right = insertNode(root->right , val);

    else if (root->data > val)
        root->left = insertNode(root->left , val);

    return root;

    /* Usage of Above Function in Main()

    // For Fun() returning Node*
    // root = insertNode(root , 33);
    // root = insertNode(root , 33);
    // root = insertNode(root , 60);
    // root = insertNode(root , 60);
    // root = insertNode(root , 10);
    // root = insertNode(root , 10);

    */
}

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

Node* deleteNode(Node*& root , int val) {
    if (root == NULL) { // node is NULL
        // cout << "BST is Empty !" << endl;
        return NULL;
    }

    if (root->data > val) { // value will be on left side
        root->left = deleteNode(root->left , val);
    }
    else if (root->data < val) { // value will be on right side
        root->right = deleteNode(root->right , val);
    }
    else if (root->data == val) { // value found
        if (root->left == NULL && root->right == NULL) { // is leaf node
            Node* temp = root;
            delete temp;
            return NULL;

        }
        else if (root->left == NULL) { // right node contains something
            Node* temp = root->right;
            delete root;
            return temp;

        }
        else if (root->right == NULL) { // left node contains something
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left != NULL && root->right != NULL) {
            int minRight = minElement(root->right);
            root->data = minRight;
            deleteNode(root->right , minRight);

        }
    }
    return root;
}

int countNodes(Node*& root) {
    if (root == NULL) return 0;
    int total = countNodes(root->left);
    total += countNodes(root->right);

    return total + 1;
}

int main( ) {

    Node* root = NULL;

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

    deleteNode(root , 30);

    cout << "Inorder : ";
    inorder(root);
    cout << endl;

    cout << "Total Nodes = " << countNodes(root) << endl;
    return 0;
}
