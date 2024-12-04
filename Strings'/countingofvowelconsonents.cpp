#include <iostream>
using namespace std;

int main()
{
    char A[] = "How are you";
    int i;
    int vcount = 0;
    int ccount = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == 'a' || A[i] == 'A' || A[i] == 'i' || A[i] == 'I' || A[i] == 'o' || A[i] == 'o' || A[i] == 'u' || A[i] == 'U' || A[i] == 'E' || A[i] == 'e')
        {
            vcount++;
        }
        else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
        {
            ccount++;
        }
    }
    cout << "The number of vowel is: " << vcount << endl;
    cout << "The number of consonent is: " << ccount << endl;

    return 0;
}