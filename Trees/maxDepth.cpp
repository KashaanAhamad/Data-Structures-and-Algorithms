#include <iostream>
#include <algorithm>
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

// Function to find the maximum depth of a binary tree
int maxDepth(Node* root) {
    if (root == NULL) {
        return 0;
    }
    
    // Compute the depth of each subtree
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    
    // Use the larger one and add 1 for the current node
    return max(leftDepth, rightDepth) + 1;
}

int main() {
    // Creating a sample binary tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Maximum depth of the binary tree is: " << maxDepth(root) << endl;

    
    // Clean up memory
    delete root;

    return 0;
}
