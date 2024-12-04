#include<iostream>
using namespace std;
int pow(int n, int m){
    if(m==0){
        return 1;
    }else{
        return pow(n,m-1)*n;
    }
}

int Ipow( int m, int n){
    if(n==0){
        return 1;

    }else if(n%2==0){
        return Ipow(m*m,n/2);
    }else{
        return m*Ipow(m*m,n/2);
    }
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<Ipow(x,y);
    
    return 0;
}