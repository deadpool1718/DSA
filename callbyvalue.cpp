#include <iostream>
using namespace std;
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a,b;
    // cin>>a>>b;
    a=29;
    b=23;
    swap(a,b);
    cout<<(a,b)<<endl;

    return 0;
}