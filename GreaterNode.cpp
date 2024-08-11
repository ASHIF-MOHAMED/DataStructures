#include<string>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next=NULL;
};

Node *rearrange(Node *head){
    Node *prev=NULL;
    Node *curr=head,*temp=NULL;
    while(curr!=NULL){
        temp=curr->next;

        curr->next=prev;

        prev=curr;

        curr=temp;
    }
    head=prev;
    Node *result=new Node();
    result->next=prev;
    Node *current=head;
    while(current!=NULL){
        current=current->next;
        if(current!=NULL){
        if(prev->data <=current->data){
            prev->next=current;
            prev=prev->next;
        }
        else{
            prev->next=current->next;
        }}
        }
    return result->next;
}

int main(){
    Node *head=new Node();
    Node *second=new Node();
    Node *third=new Node();

    head->data=5;
    head->next=second;

    second->next=third;
    second->data=2;

    third->data=3;

    Node *result=rearrange(head);

    Node *prev=NULL;
    Node *curr=result,*temp=NULL;
    while(curr!=NULL){
        temp=curr->next;

        curr->next=prev;

        prev=curr;

        curr=temp;
    }
    result=prev;

    while(result!=NULL){
        cout<<result->data<<" ";
        result=result->next;
    }
} 
