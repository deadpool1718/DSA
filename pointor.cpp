#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c = a + b;
    
    return (c);
}

int main()
{
    // int a = 10;
    // int *p;
    // p = &a;
    // cout << a << endl;
    // cout << *p;
    int x,y,z;
    cin>>x>>y;
    z=add(x,y);
    
    cout<<z<<endl;
    return 0;
}