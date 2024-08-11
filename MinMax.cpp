#include<iostream>
using namespace std;
int main()
{
   int a[10],n,i;
    cout<<"Enter the NO of elements in an array:";
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxim=a[0],mini=a[0];
    for (i=0;i<5;i++)
    {
        if(a[i]>maxim)
        {
            maxim=a[i];
        }
        if(a[i]<mini)
        {
            mini=a[i];
        }
    }
    int maxi=0,minim=maxi;
    for(int i=0;i<5;i++)
    {
        if(a[i]==maxim||a[i]==mini)
        {
            continue;
        }
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
        if(a[i]<minim)
        {
            minim=a[i];
        }
    }
    cout<<"2nd Minimum:"<<minim;
    cout<<"2nd Maximun:"<<maxi;
}
