#include <iostream>
#include <math.h>
using namespace std;
int fun(int n)

{
    static int y = 0;
    if (n > 0)
    {
        y++;
        cout << n;

        return fun(n - 1) + y;
    }
    cout << endl;
    return 0;
}

int main()
{
    int x;
    cin >> x;
    cout << fun(x);

    return 0;
}