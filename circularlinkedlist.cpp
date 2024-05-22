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
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for Node with data:"<<value<<endl;    }
};
void InsertNode(Node *&tail,int d,int i){
    if(tail==NULL){
        Node *newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node *curr=tail;
        while(curr->data!=i){
            curr=curr->next;
        }
        Node *temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node *tail){
    Node *temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
int main(){
    Node *tail=NULL;
    InsertNode(tail,9,1);
    print(tail);

    InsertNode(tail,12,2);
    print(tail);
    return 0;
}