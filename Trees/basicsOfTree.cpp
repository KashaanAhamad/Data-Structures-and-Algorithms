#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class trees{
    public:
    int data;
    trees* left;
    trees* right;

    trees(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

    // destructor
    ~trees(){
        if(this->left!=NULL){
            delete this->left;
        }
        if(this->right!=NULL){
            delete this->right;
        }
    }

};


int main() {
    // creating a tree
    trees* root=NULL;
    root=new trees(1);
    root->left=new trees(2);
    root->right=new trees(3);
    root->left->left=new trees(4);
    root->left->right=new trees(5);
    root->right->left=new trees(6);
    root->right->right=new trees(7);

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<root->left->left->data<<endl;
    cout<<root->left->right->data<<endl;
    cout<<root->right->left->data<<endl;
    cout<<root->right->right->data<<endl;

    return 0;
}
