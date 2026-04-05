#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Compile it using g++ -o main.exe <File_Relative_Path>

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class SinglyLinkedList{
    public:
    Node* head;
    SinglyLinkedList(){
        head=NULL;
    }
    void insertAtBeginning(int data){
        Node* newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
    void insertAtEnd(int data){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void insertAtPosition(int data,int position){
        Node* newNode=new Node(data);
        if(position==1){
            insertAtBeginning(data);
            return;
        }
        Node* temp=head;
        for(int i=1;i<position-1;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void deleteAtBeginning(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    void deleteAtEnd(){
        if(head==NULL){
            return;
        }
        if(head->next==NULL){
            delete head;
            head=NULL;
            return;
        }
        Node* temp=head;
        Node* prev=NULL;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        delete temp;
    }
    void deleteAtPosition(int position){
        if(head==NULL){
            return;
        }
        if(position==1){
            deleteAtBeginning();
            return;
        }
        Node* temp=head;
        Node* prev=NULL;
        for(int i=1;i<position-1;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(int argc, char const *argv[])
{
    SinglyLinkedList ll;
    ll.insertAtBeginning(10);
    ll.insertAtEnd(20);
    ll.insertAtPosition(30,2);
    ll.display();
    ll.deleteAtBeginning();
    ll.deleteAtEnd();
    ll.deleteAtPosition(2);
    ll.display();
    return 0;
}