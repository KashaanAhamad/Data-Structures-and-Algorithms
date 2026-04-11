#include <stdio.h>
#include <stdlib.h>

//In singly LL head is a Node But in Doubly LL head is a pointer
struct Node{
    int data;
    struct Node *next;
    //struct Node *prev;
};

void traversal(struct Node* head){
    struct Node *ptr=head;
    while(ptr->next!=head){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    //ptr=ptr->next;
    printf("%d\n",ptr->data);
}


struct Node* inserAtStart(struct Node*head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node* p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    //At this point p points to the last nodeof this circular LL
    p->next=ptr;
    ptr->next=head;
    head =ptr;
    return head;
}



int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;



    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    

    //head->prev=fourth;
    head->data=20;
    head->next=second;

    //second->prev=head;
    second->data=30;
    second->next=third;

    //third->prev=second;
    third->data=60;
    third->next=fourth;

    //fourth->prev=third;
    fourth->data=90;
    fourth->next=head;
    
    traversal(head);
    printf("befor addintion\n\n");
    head=inserAtStart(head,43);
    
    traversal(head);
    
    return 0;
}