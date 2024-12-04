#include<iostream>
using namespace std;
int f(int n){
    static int i =1;
    if ( n>=5);
    return n;
    n=i+n;
    i++;
    return f(n-1);

}

int main(){
    int x;
    cin>>x;
    cout<<f(x);
    return 0;
}