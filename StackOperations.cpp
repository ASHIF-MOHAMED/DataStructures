#include<iostream>
#include<string>
using namespace std;
class stack
{
    public:
  string names[10];
  int identity[10];
  int salarys[10];
  int top=-1;
  void push(string name,int id,int salary)
  {
      if(top>=10)
      {
          cout<<"stack is full"<<endl;
      }
      else
      {
          top=top+1;
          names[top]=name;
          identity[top]=id;
          salarys[top]=salary;
          cout<<"name:"<<name<<" "<<"id:"<<id<<" "<<"salary:"<<salary<<endl;
      }
  }

  void pop()
  {
      if(top<0)
      {
          cout<<"stack is empty"<<endl;
      }
      else
      {
           string name=names[top];
          int id=identity[top];
          int salary=salarys[top];
          cout<<"popped name:"<<name<<" "<<"popped id:"<<id<<" "<<"popped salary:"<<salary<<endl;
      }
  }

  void peek()
  {
      if(top<0)
      {
          cout<<"stack is empty"<<endl;
      }
      else
      {
          string name=names[top];
          int id=identity[top];
          int salary=salarys[top];
    cout<<"peek name:"<<name<<" "<<"peek id:"<<id<<" "<<"peek salary:"<<salary<<endl;
      }
  }

};
int main()
{
    stack es;
    string name;
    int id,salary;
    cout<<"PUSHING DATAS INTO STACK"<<endl;
    cout<<"Enter name,id,salary for 1st employee:";
    cin>>name;
    cin>>id;
    cin>>salary;
    es.push(name,id,salary);
     cout<<"Enter name,id,salary for 2nd employee:";
    cin>>name;
    cin>>id;
    cin>>salary;
    es.push(name,id,salary);
     cout<<"Enter name,id,salary for 3rd employee:";
    cin>>name;
    cin>>id;
    cin>>salary;
    es.push(name,id,salary);
     cout<<"Enter name,id,salary for 4th employee:";
    cin>>name;
    cin>>id;
    cin>>salary;
    es.push(name,id,salary);
     cout<<"Enter name,id,salary for 5th employee:";
    cin>>name;
    cin>>id;
    cin>>salary;
    es.push(name,id,salary);
    cout<<endl;
    cout<<"PEEK ELEMENT IN THE STACK"<<endl;
    es.peek();
    cout<<endl;
    cout<<"POP DATA FROM STACK"<<endl;
    es.pop();
}
