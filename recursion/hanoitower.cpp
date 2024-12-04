#include<iostream>
using namespace std;
void TOH(int n,int A, int B,int C){
    if (n>0)
    {
        TOH(n-1,A,C,B);
        cout<<"From tower "<<A<<" to tower "<<C<<endl;      
        TOH(n-1,B,A,C);
    }
    
}

int main(){
    int w;
    int x=1,y=2,z=3;
    cin>>w;
    TOH(w,x,y,z);
    
    return 0;
}