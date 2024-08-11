. #include<iostream>
#include<string>
using namespace std;

struct A{
    int grade;
    string name;
};
int main(){
    int n,min1;
    cout<<"Enter No of students:";
    cin>>n;
    struct A stud[n];
    for(int i=0;i<n;i++){
            cout<<"Enter name:";
        cin>>stud[i].name;
    cout<<"Enter grade:";
        cin>>stud[i].grade;
    }
    for(int i=0;i<n-1;i++){
        min1=i;
        for(int j=i+1;j<n;j++){
            if(stud[j].grade<stud[min1].grade){
                min1=j;
            }

        }
        swap(stud[i],stud[min1]);

    }
    for(int i=0;i<n;i++){
        cout<<"\n"<<stud[i].name<<":"<<stud[i].grade<<endl;
    }
}
