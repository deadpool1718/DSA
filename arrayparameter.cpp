// #include <iostream>
// using namespace std;
// void fun(int A[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i]<<endl;
//     }
// }
// int main()
// {
//     int A[5] = {2, 3, 45, 5, 7};
//     fun(A,5);

//     return 0;
// }

#include <iostream>
using namespace std;
void fun(int A[])
{
    cout << sizeof(A) / sizeof(int) << endl;
}

int main()
{
    int A[] = {2, 3, 45, 5, 6};
    int i = 5;
    fun(A);
    for (int x : A)

        cout << x << " ";

    return 0;
}