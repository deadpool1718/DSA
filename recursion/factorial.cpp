#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}
int Ifactorial(int n)
{
    int i, f = 1;
    for (int i = 1; i <= n; i++)

        f = f * i;
    return f;
}

int main()
{
    int x;
    cin >> x;
    cout << Ifactorial(x);

    return 0;
}