#include <iostream>
using namespace std;
struct Matrix
{
    int *A;
    int n;
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};
void Matrix::Set(int i, int j, int x)
{
    if (i >= j)
        A[i * (i - 1) / 2 + (j - 1)] = x;
}
int Matrix::Get(int i, int j)
{
    if (i >= j)
        return A[i * (i - 1) / 2 + (j - 1)]; //This is for row major
                                             //for column major it would be: return A[n(j-1)+(j-2)*(j-1)/2+(i-j)]+x;
    else
        return 0;
}
void Matrix::Display()
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i >= j)
            {

                cout << A[i * (i - 1) / 2 + (j - 1)] << " ";
            }
            else
            {

                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int i, j, x;
    Matrix m;
    cout << "Enter the dimensions:" << endl;
    cin >> m.n;
    m.A = new int[m.n * (m.n + 1) / 2];
    cout << "Enter all elements:" << endl;

    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            cin >> x;
            m.Set(i, j, x);
        }
    }
    cout << endl;
    m.Display();

    return 0;
}