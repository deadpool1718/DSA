#include<iostream>
using namespace std;
double e(int x,int n){
    static double p=1,f=1,r;
    if(n==0){
        return 1;
    }else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<e(a,b);
    
    return 0;
}