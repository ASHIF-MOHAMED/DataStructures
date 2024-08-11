#include <iostream>
using namespace std;
int main()
{
    int i,j,maxim=0,count=0,n,res=0,temp;

    int a[10];
    cout<<"Enter the NO of elements in an array:";
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n;i++)
    {
        temp=a[i];
        for(j=0;j<n;j++)
        {
            if(a[j]==temp)
            {
                count++;
            }
        }
        if(count==1)
        {
            res++;
        }
        count=0;
    }
    cout<<"No of unique elements:"<<res;
}
