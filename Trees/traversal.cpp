#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    ~Node() {
        if (this->left != NULL) {
            delete this->left;
        }
        if (this->right != NULL) {
            delete this->right;
        }
    }
};

// 1. Pre-order Traversal (Root, Left, Right)
void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// 2. In-order Traversal (Left, Root, Right)
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// 3. Post-order Traversal (Left, Right, Root)
void postorder(Node* root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    // Creating a new tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Pre-order Traversal: ";
    preorder(root);
    cout << endl;

    cout << "In-order Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    postorder(root);
    cout << endl;

    // Clean up memory
    delete root;

    return 0;
}



