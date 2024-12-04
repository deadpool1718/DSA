#include <iostream>
using namespace std;

int main()
{
    char a[] = "MADAy";
    int i, j;
    bool isPelindrome = true;
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    for (i = i - 1, j = 0; i >= j; i--, j++)
    {
        if (a[i] != a[j])
        {

            isPelindrome = 0;
            break;
        }
    }
    if (isPelindrome)
    {
        cout << "It is a pelindrome." << endl;
    }
    else
        cout << "It is not a pelindrome." << endl;

    return 0;
}