#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        cout<<"Memory is free for data: "<<this->data<<endl;
    }
};
void insertAtHead(Node *&head,int data){
    Node *temp=new Node(data);
    temp->next=head;
    head=temp;
}
/*
void insertAtTail(Node *&tail,int data){
    Node *temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}*/
//code given below is same as insertAtTail function
void insertLL(Node *&head,int data){
    Node *temp=head;
    Node *x=new Node(data);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=x;
}
void insertAtMiddle(Node *&head,int index,int data){
    if(index==0){
        insertAtHead(head,data);
        return;
    }
    int i=0;
    Node *temp=head;
    Node *x=new Node(data);
    while(i<index-1){
        temp=temp->next;
        i++;
    }
    x->next=temp->next;
    temp->next=x;
}
void deleteNode(Node *&head,int index){
    Node *temp;
    if(index==0){
        temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node *curr=head,*prev=NULL;
    for(int i=0;i<index;i++){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
}
void printLL(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *node1=new Node(5);
    Node *head=node1;
    Node *tail=node1;
    insertAtHead(head,10);
    insertLL(head,20);
    //insertAtTail(tail,20);
    insertAtMiddle(head,2,15);
    printLL(head);
    deleteNode(head,2);
    printLL(head);
    return 0;
}