#include<iostream>
using namespace std;
void Swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    // cout<<(a,b)<<endl;
    swap(a,b);
    cout<<"This is swapped"<<(a,b)<<endl;
    
    return 0;
}