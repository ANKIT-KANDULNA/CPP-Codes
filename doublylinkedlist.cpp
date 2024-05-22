#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for Node with data:"<<value<<endl;    }
};
void InsertAtHead(Node *&head,Node *&tail,int d){
    //empty list
    if(head==NULL){
        Node *temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node *temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void InsertAtTail(Node *&head,Node *&tail,int d){
    if(tail==NULL){
        Node *temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
        Node *temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
void InsertAtMiddle(Node *&head,Node *&tail,int d,int i){
    if(i==1){
        InsertAtHead(head,tail,d);
        return;
    }
    Node *temp=head;
    int count=1;
    while(count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        InsertAtTail(head,tail,d);
        return;
    }
    //creating a node for data
    Node *nodetoInsert=new Node(d);
    nodetoInsert->next=temp->next;
    temp->next->prev=nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev=temp;
}
void DeleteNode(Node *&head,int i){
    if(i==1){
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node *curr=head;
        Node *prev=NULL;
        if(curr->next!=NULL){
            curr->next->prev = prev; 
            // This line is essential to maintain the integrity of the linked list.
        }
        int count=1;
        while(count<i){
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getLength(Node *head){
    int len=0;
    Node *temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
int main(){
    Node *node1=new Node(10);
    Node *head=NULL;
    Node *tail=NULL;
    InsertAtHead(head,tail,5);
    InsertAtHead(head,tail,7);
    InsertAtTail(head,tail,3);
    InsertAtMiddle(head,tail,9,1);
    DeleteNode(head,4);
    print(head);
    cout<<endl;
    cout<<"Length:"<<getLength(head)<<endl;
    return 0;
}