#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for Node with data:"<<value<<endl;    }
};
void InsertAtHead(Node *&head,int d){
    //create new node
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node *&tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void InsertAtMiddle(Node *&head,Node *&tail,int d,int i){
    if(i==1){
        InsertAtHead(head,d);
        return;
    }
    Node *temp=head;
    int count=1;
    while(count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node *nodetoInsert=new Node(d);
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;
}
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void DeleteNode(Node *&head,Node *&curr,int i){
    if(i==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node *curr=head;
        Node *prev=NULL;
        int count=1;
        while(count<i){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    //create new node
    Node *node1=new Node(10);
    Node *head=node1;
    Node *curr=head;
    Node *tail=node1;
    InsertAtHead(head,12);
    InsertAtHead(head,15);
    InsertAtTail(tail,16);
    InsertAtMiddle(head,tail,9,5);
    DeleteNode(head,curr,3);
    print(head);
    cout<<endl;
    return 0;
}