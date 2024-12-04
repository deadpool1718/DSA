#include <iostream>
using namespace std;
void Swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    // cin>>a>>b;
    a = 29;
    b = 23;
    Swap(a, b);
    cout << a << endl;
    cout << b << endl;

    return 0;
}