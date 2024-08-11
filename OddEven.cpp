#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10],n;
    int sum=0;
    int middle;
    int position;
    int evencount=0,oddcount=0,even=0,odd=0;
    cout<<"Enter array size:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element:";
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    middle=sum/n;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==middle)
        {
            position=i;
        }
    }
    for(int i=0;i<position;i++)
    {
        if(arr[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    for(int i=position+1;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"Ans 1:"<<evencount<<endl<<"Ans 2:"<<oddcount<<endl;
    cout<<"Ans 4:"<<even<<endl<<"Ans 5:"<<odd<<endl;
    return 0;
}
