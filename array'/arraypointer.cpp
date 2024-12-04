#include<iostream>
using namespace std;

int main(){
    int A[5]={2,4,6,8,10};
    int *p;
    p=new int[5];
    p[0]=0;
    p[1]=3;
    p[2]=5;
    p[3]=2;
    p[5]=7;
    for (int i = 0; i <=4; i++)
    {
       cout<<A[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i <=4; i++) 
       cout<<p[i]<<" "; 
       cout<<endl;   
       cout<<p[4];
    

    return 0;
}