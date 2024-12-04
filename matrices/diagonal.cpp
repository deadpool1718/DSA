#include <iostream>
using namespace std;
struct Matrix
{
    int A[10];
    int n;
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};
void Matrix::Set(int i, int j, int x)
{
    if (i == j)
        A[i - 1] = x;
}
int Matrix::Get(int i, int j)
{
    if (i == j)
        return A[i - 1];
    else
        return 0;
}
void Matrix::Display()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {

                cout << A[i]<<" ";
            }
            else
            {

                cout << "0 ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    Matrix m;
    m.n = 4;
    m.Set(1, 1, 5);
    m.Set(2, 2, 6);
    m.Set(3, 3, 8);
    m.Set(4, 4, 3);
    m.Display();
    cout<<m.Get(1,1);


    return 0;
}