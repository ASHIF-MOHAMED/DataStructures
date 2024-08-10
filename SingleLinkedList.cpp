#include<iostream>
using namespace std;
class node
{
public:
int data;
node*next;
node(int data)
{
data=data;
next=nullptr;
}
};
int main()
{
node*head=NULL;
node*mid=NULL;
node*tail=NULL;
head=new node(1);
mid=new node(2);
tail=new node(3);
head->next=mid;
mid->next=tail;
tail->next=NULL;
}
