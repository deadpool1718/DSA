#include <iostream>
#include <math.h>
using namespace std;
int fun(int n)
{
    if (n > 0)
    {
        cout << n;
       
        return fun(n - 1)+n;
    }
      cout<<endl;
    return 0;
   
}

int main()
{
    int x;
    cin >> x;
    cout<<fun(x) ;

    return 0;
}