#include<iostream>
using namespace std;

int main(){
    char a[]="CHURMA";
    int i,j,t;
    for (int j = 0; a[j]!='\0'; j++)
    {
        j=j-1;
        for (int i = 0; i < j; i++,j++)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        
    }
    cout<<"The reversed string is:"<<a<<endl;
    
    return 0;
}