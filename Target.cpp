#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,3,1,3,4,0,12};
    int ct=0;
    int targ=7;
    int n=7;
    for(int i=0;i<n;++i)
    {
        if(arr[i]+arr[i+1]+arr[i+2]==targ){
                    ct++;
        }

}
cout<<ct;
}
