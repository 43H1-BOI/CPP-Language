#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left , * right;

    Node(int val) {
        this->data = val;
        left = right = NULL;
    }
};

Node* insertBST(Node* root , int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val > root->data) {
        root->right = insertBST(root->right , val);
    }
    else if (val < root->data) {
        root->left = insertBST(root->left , val);
    }

    return root;
}

/*
void insertBST(Node*& root , int val) {
    if (root == NULL) {
        Node* newNode = new Node(val);
        root = newNode;
        return;
    }

    if (val > root->data) {
        insertBST(root->right , val);
    }
    else if (val < root->data) {
        insertBST(root->left , val);
    }
}
*/

int minElement(Node* root) {
    if (root == NULL) {
        return -1;
    }

    Node* temp = root;

    while (temp->left != NULL) {
        temp = temp->left;
    }

    return temp->data;
}

Node* deleteBST(Node* root , int val) {
    if (root == NULL) {
        return NULL;
    }

    if (val > root->data) {
        root->right = deleteBST(root->right , val);
    }
    else if (val < root->data) {
        root->left = deleteBST(root->left , val);
    }
    else {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        else if (root->left == NULL) {
            root = root->right;
        }
        else if (root->right == NULL) {
            root = root->left;
        }
        else {
            int rightMin = minElement(root->right);
            root->data = rightMin;
            deleteBST(root->right , rightMin);
        }
    }
    return root;
}

void  insertNode(Node*& root , int val) {
    if (root == NULL) {
        Node* newNode = new Node(val);
        root = newNode;
        return;
    }

    if (val > root->data)
        insertNode(root->right , val);
    else if (val < root->data)
        insertNode(root->right , val);

}


void deleteNode(Node*& root , int val) {
    if (root == NULL) {
        return;
    }

    if (val > root->data) {
        deleteNode(root->right , val);
    }
    else if (val < root->data) {
        deleteNode(root->left , val);
    }
    else {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL) {
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL) {
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        else { // root->left != NULL && root->right != NULL
            int min = minElement(root->right);
            root->data = min;
            deleteNode(root->right , min);
        }
    }
}

void Inorder(Node* root) {
    if (root == NULL) {
        return;
    }

    Inorder(root->left);
    cout << root->data << "  ";
    Inorder(root->right);
}

void Preorder(Node* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << "  ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(Node* root) {
    if (root == NULL) {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << "  ";
}


int main( ) {
    Node* root = NULL;
    root = insertBST(root , 5);
    root = insertBST(root , 4);
    root = insertBST(root , 2);
    root = insertBST(root , 8);
    root = insertBST(root , 1);
    root = insertBST(root , 10);

    cout << "Inorder : ";
    Inorder(root);
    cout << endl;

    cout << "Preorder : ";
    Preorder(root);
    cout << endl;

    cout << "Postorder : ";
    Postorder(root);
    cout << endl;

    root = deleteBST(root , 1);

    cout << "Inorder : ";
    Inorder(root);
    cout << endl;

    cout << "Preorder : ";
    Preorder(root);
    cout << endl;

    cout << "Postorder : ";
    Postorder(root);
    cout << endl;


    return 0;
}