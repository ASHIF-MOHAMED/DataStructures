. #include<iostream>
#include<string>
using namespace std;
class node
{
    public:
    int data2,data3;
    string data1;
    node* next;
};
void salary(node* head)
{
    int max=head->data3;
    node* temp=head->next;
    while(temp!=NULL)
    {
        if(temp->data3>max)
        {
            max=temp->data3;
        }
        temp=temp->next;
    }
    cout<<"Maximum salary among the employees :"<<max<<endl;
}
int main()
{
    int id,sal;string name;
    int n;
    node* head=NULL;
    cout<<"Enter the number of Employees:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the name of employee:";
        cin>>name;
        cout<<"Enter the ID of employee:";
        cin>>id;
        cout<<"Enter salary of employee:";
        cin>>sal;
        node* newnode=new node();
        newnode->data1=name;
        newnode->data2=id;
        newnode->data3=sal;
        newnode->next=head;
        head=newnode;
    }
    salary(head);
}
