#include <iostream>
#include <cmath>
using namespace std;
int function(int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 0;

        // cout << pow(n, 2) << endl;
    }
    else
    {
        return pow(n, 2) + function(n - 1);
    }
}
void printSquares(int n)
{
    for (int i = 0; i <= n; ++i)
    {
        cout << "Square of " << i << " is " << i * i << endl;
    }
}
void prntsquare(int n)
{

    for (int i = 1; i <= n; ++i)
    {
        cout << pow(i, 2) << " ";
        if (i < n)
        {
            cout << " + ";
        }
    }
    cout << endl;
}
int fun(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + pow(i, 2);
    }
    return sum;
}
int main()
{

    int x;
    cout << "Enter the number :" << endl;
    cin >> x;
   
   for(int i=1;i<=x;i++)
    {
        cout<<"The sum of the squares from integer 1 to "<<i<<" is : "<<fun(i)<<endl;
    }
    return 0;
}