#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node * next;
    node* prev;
};
void middle(node*head,int size)
{
    int mid;
    int i=0;
    node* curr=head;
    if(size%2==0)
    {
        mid=((size/2)+(size/2)+1)/2;
    }
    else
    {
        mid=(size+1)/2;
    }
    while(curr!=NULL)
    {
        if(i==mid)
        {
            cout<<"Middle value:"<<curr->data<<endl;
        }
        i++;
    curr=curr->next;
}
}
int main()
{
    node * head=NULL;
    node* sec=NULL;
    node* third=NULL;
    node* four=NULL;
    node*five=NULL;
    head=new node();
    sec=new node();
    third=new node();
    four=new node();
    five=new node();
    head->data=1;
    head->next=sec;
    head->prev=NULL;
    sec->data=2;
    sec->next=third;
    sec->prev=head;
    third->data=3;
    third->next=four;
    third->prev=sec;
    four->data=4;
    four->next=five;
    four->prev=third;
    five->data=5;
    five->next=NULL;
    five->prev=four;
    middle(head,4);
    return 0;
}
