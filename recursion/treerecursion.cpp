#include<iostream>
using namespace std;
int fun(int n){
    if(n>0){
        cout<<n;
        fun(n-1);                       
        fun(n-1);                       
    }
    
}
int main(){
    int x;
    cin>>x;
    fun(x);
    
    return 0;
}