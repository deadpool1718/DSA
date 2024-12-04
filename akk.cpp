#include<iostream>
using namespace std;
struct Ractangle{
    int length;
    int breadth;
    char x;

};
int main(){
    struct Ractangle r1={(4,6)};
    r1.length=23;
    r1.breadth=45;
    cout<<r1.breadth<<endl;
    cout<<r1.length<<endl;
    cout<<sizeof(r1);
    
    
    return 0;
}