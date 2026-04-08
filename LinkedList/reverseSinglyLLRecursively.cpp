#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void reverseRecursively(struct Node* p)
{   
    if(p->next ==NULL){
        head=p;
        return ;
    }
    reverseRecursively(p->next);
    struct Node* q=p->next;
    q->next=p;
    p->next=NULL;


}

int main(int argc, char const *argv[])
{
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=4;
    head->next=second;

    second->data=6;
    second->next=third;

    third->data=10;
    third->next=NULL;
    
    reverseRecursively(head);
   cout<<::head->data;
    
    return 0;
}