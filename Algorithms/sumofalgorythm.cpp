#include <iostream>
using namespace std;
void TOH(int n, char A, char B, char C)
{
    if (n == 0)
        return;
    TOH(n - 1, A, C, B);
    cout << "Move disk " << n << " from " << A << " to " << C << endl;
    TOH(n - 1, B, A, C);
}

int main()
{

    int x;
    char A = 'A';
    char B = 'B';
    char C = 'C';
    cin >> x;
    TOH(x, A, B, C);

    return 0;
}