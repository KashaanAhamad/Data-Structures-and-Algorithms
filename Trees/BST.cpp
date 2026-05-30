#include <iostream>
using namespace std;

/*
================================================================================
BINARY SEARCH TREE (BST)
================================================================================
A Binary Search Tree is a node-based binary tree data structure which has the 
following properties:
1. The left subtree of a node contains only nodes with keys lesser than the node's key.
2. The right subtree of a node contains only nodes with keys greater than the node's key.
3. The left and right subtree must each also be a binary search tree.
4. There must be no duplicate nodes (typically, though some variations allow them).

Time Complexities:
- Search: O(log N) average, O(N) worst-case (skewed tree)
- Insertion: O(log N) average, O(N) worst-case
- Deletion: O(log N) average, O(N) worst-case
================================================================================
*/

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

    ~Node() {
        if (left != NULL) {
            delete left;
        }
        if (right != NULL) {
            delete right;
        }
    }
};

// Function to insert a value into the BST
Node* insert(Node* root, int val) {
    // If the tree/subtree is empty, return a new node
    if (root == NULL) {
        return new Node(val);
    }

    // Otherwise, recur down the tree
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }

    // Return the unchanged root pointer
    return root;
}

// Function to search a key in the BST
bool search(Node* root, int key) {
    // Base Cases: root is null or key is present at root
    if (root == NULL) {
        return false;
    }
    if (root->data == key) {
        return true;
    }

    // Key is smaller than root's data
    if (key < root->data) {
        return search(root->left, key);
    }

    // Key is greater than root's data
    return search(root->right, key);
}

// In-order traversal (always prints the elements in sorted ascending order)
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;

    // Inserting nodes
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Print in-order traversal
    cout << "In-order traversal of the BST (Sorted Order): ";
    inorder(root);
    cout << endl;

    // Search for elements
    int searchKey1 = 60;
    int searchKey2 = 90;

    cout << "Search " << searchKey1 << ": " << (search(root, searchKey1) ? "Found" : "Not Found") << endl;
    cout << "Search " << searchKey2 << ": " << (search(root, searchKey2) ? "Found" : "Not Found") << endl;

    // Clean up memory
    delete root;

    return 0;
}
