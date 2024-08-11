#include<iostream>
#include<string>
using namespace std;
struct emp
{
    int sal;
    string name;
};
int main()
{
    int n;
    cout<<"Enter The No Of Employees:";
    cin>>n;
    struct emp e[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Employee Name:";

        cin>>e[i].name;
        cout<<"Enter the salary:";
        cin>>e[i].sal;
    }
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (e[j].sal>e[j+1].sal)
                swap(e[j],e[j+1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<e[i].name<<":"<<e[i].sal<<endl;
    }
}
