#include <iostream>
using namespace std;

int main()
{
    char a[] = "painting";
    char b[] = "painter";
    int i, j;
    for (i = j = 0; (a[i] != '\0' && b[i] != '\0'); i++, j++)
    {
        if (a[i] != b[j])
            break;
    }
    if (a[i] < b[j])
    {
        cout << "Smaller" << endl;
    }
    else if (a[i] == b[j])
    {
        cout << "Equal" << endl;
    }
    else
        cout << "larger" << endl;

    return 0;
}