#include <iostream>
using namespace std;

int countMoves(int n, char A, char B, char C, int &movecount)
{
    if (n > 0)
    {

        // Type your code here
        countMoves(n - 1, A, C, B, movecount);
        cout << "From disk " << A << " to disk " << C << endl;
        countMoves(n - 1, B, A, C, movecount);
        movecount++;
        return movecount;
    }
}

int main()
{
    int n;

    char A = 'A';
    char B = 'B';
    char C = 'C';
    cin >> n;
    int movecount=0;

    // countMoves(q, A, B, C);
    int totalMoves = countMoves(n, A, B, C, movecount);
    cout << "Total number of moves: " << totalMoves << endl;

    return 0;
}