.#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
void insertatfront(node* head,int data)
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
   node* temp=head;
   node* newnode=new node();
   newnode->data=data;
   while(temp->next!=head)
   {
       temp=temp->next;
   }
   temp->next=newnode;
   newnode->next=head;
   head=newnode;
}
node* curr=head;
if(head!=NULL)
{
    cout<<"after inserting front:";
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);

}
cout<<endl;
}
void insertatpos(node* head,int pos,int data)
{
  node* curr=head;
  for(int i=1;i<pos-1;i++)
  {
      curr=curr->next;
  }
  node* newnode=new node();
  newnode->data=data;
  newnode->next=curr->next;
  curr->next=newnode;
  node* temp=head;
if(head!=NULL)
{
    cout<<"after inserting at position:";
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);

}
cout<<endl;
}
void insertatlast(node* head,int data)
{
    node* var=head;
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        while(var->next!=head)
        {
            var=var->next;
        }
        node* newnode=new node();
        newnode->data=data;
        var->next=newnode;
        newnode->next=head;
    }
    node* curr=head;
if(head!=NULL)
{
    cout<<"after inserting at last:";
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);

}
cout<<endl;
}
int main()
{
    int d1,d2,d3,d4;
    int pos;
    node* head=NULL;
    node* second=NULL;
    node* third=NULL;
    node* four=NULL;

    cout<<"Enter data for 1st node:";
    cin>>d1;
    cout<<"Enter data for 2nd node:";
    cin>>d2;
    cout<<"Enter data for 3rd node:";
    cin>>d3;
    cout<<"Enter data for 4th node:";
    cin>>d4;
    head=new node();
    second=new node();
    third=new node();
    four=new node();

    head->data=d1;
    head->next=second;
    second->data=d2;
    second->next=third;
    third->data=d3;
    third->next=four;
    four->data=d4;
    four->next=head;
    int data;
    cout<<"Enter data to be inserted at front:";
    cin>>data;
    insertatfront(head,data);
}
