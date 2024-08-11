#include<iostream>
using namespace std;
int main()
{
    int a[10],k,n,count=0,i;
    cout<<"Enter the NO of elements in an array:";
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element from given to search its occurances:";
    cin>>k;
    for(i=0;i<n;i++)
    {
        if (k==a[i])
        {
            count=count+1;
        }
    }
    cout<<"No of times it appeared is :"<<count<<endl;
}
