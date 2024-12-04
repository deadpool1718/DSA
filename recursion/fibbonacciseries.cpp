// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//     if (n <= 1)

//         return n;

//     return fib(n - 2) + fib(n - 1);
// }

// int main()
// {
//     int x;
//     cin >> x;
//     cout << fib(x);

//     return 0;
// }

#include <iostream>
using namespace std;
// int fib(int n)
// {
//     int s = 0, i, t1 = 1, t0 = 0;
//     if (n <= 1)
//         return n;
//     for (i = 2; i <= n; i++)
//     {
//         s = t0 + t1;
//         t0 = t1;
//         t1 = s;
//     }
//     return s;
// }

// int main()
// {
//     int x;
//     cin >> x;
//     cout << fib(x);

//     return 0;
// }

int F[10];
int rfib(int n)
{
    if (n <= 1)
    {
        return F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            ;
        F[n - 1] = rfib(n - 1);
        if (F[n - 2] == -1)
            ;
        F[n - 2] = rfib(n - 2);

        return F[n - 1] + F[n - 2];
    }
}
int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= 10; i++)
    {
        F[i] = -1;
    }

    cout << rfib(x);
}