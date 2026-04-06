#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>
struct Node{
    int data;
    struct Node* next;
};

struct Node* reverseLL(struct Node* head)
{
    struct Node* prev=NULL;
    struct Node* next=NULL;
    while(head!=NULL){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
}

int main(int argc, char const *argv[])
{
    
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof (struct Node));

    //link first and second node
    head->data=7;
    head->next=second;

    //link second and third
    second->data=11;
    second->next=third;

    //therminate the list at third
    third->data=66;
    third->next=NULL;
    head=reverseLL(head);
    cout<<head->data;


    
    return 0;
}