#include <iostream>
using namespace std;

int main()
{
    int *p, *q;
    p = new int[5];
    p[0] = 0;
    p[1] = 3;
    p[2] = 5;
    p[3] = 2;
    p[5] = 7;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    p = new int[10];

    for (int i = 0; i < 5; i++)
    {

        p[5] = q[10];

        cout << q[i] << " ";
    }

    return 0;
}