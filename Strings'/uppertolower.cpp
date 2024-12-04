#include <iostream>
using namespace std;

int main()
{
    char s[] = "WELCOME";
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] + 32;
    }
    cout << "Lower case of WELCOME is : " << s << endl;
    cout << endl;
    char a[] = "please";
    for (int i = 0; a[i] != '\0'; i++)
    {
        a[i] = a[i] - 32;
    }
    cout << "Upper case is: " << a << endl;
    char t[] = "AAAAAAAAbbbbbbbb";
    for (int i = 0; t[i] != '\0'; i++)
    {
        if (t[i] >= 65 && t[i] <= 90)
        {

            t[i] = t[i] + 32;
        }
        else
        {

            t[i] = t[i] - 32;
        }
    }
    cout << "Toggling of the string is :" <<t<< endl;

    return 0;
}