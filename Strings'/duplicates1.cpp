#include <iostream>
using namespace std;

int main()
{
    char a[] = "finding";
    bool areDuplicates = true;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] > 98 && a[i] < 123)
            areDuplicates = true;
        continue;
    }
    if (areDuplicates)
    {
        cout << "There are duplicates." << endl;
    }
    else
        cout << "There ar no duplicates." << endl;

    return 0
}