#include <iostream>
using namespace std;

int main()
{
    char A[] = "How are you";
    int word = 1;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i-1] != ' ')

            word++;
    }
    cout << "The total word in this character is :" << word << endl;

    return 0;
}