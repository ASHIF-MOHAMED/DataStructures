#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int n=s.length();
    int a[n];int count=0,i,j;
    char c[n];int freq[n];int mini;
    for (i=0;i<n;i++){
        c[i]=s[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(c[i]==c[j]){
                count++;
            }

        }
        freq[i]=count;
        count=0;
    }

    cout<<endl;
    for(i=0;i<n-1;i++){
             mini=i;
        for(j=i+1;j<n;j++){
            if(freq[mini]<freq[j]){
                mini=j;
            }
        }
    if(mini!=i){
        swap(freq[i],freq[mini]);
        swap(c[i],c[mini]);
    }
    }
    for(i=0;i<n;i++){
        cout<<c[i];
    }
}
