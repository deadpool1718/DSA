#include <iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout << "Elements are"<< endl;

    for (int i = 0; i < arr.length; i++)

        cout << arr.A[i]<<" ";
}


int main()
{
    struct Array arr;
    int n, i;

    cout << "Enter the size of array" << endl;
    cin >> arr.size;

    arr.A = new int[arr.size];
    arr.length = 0;

    cout << "Enter number of numbers " << endl;
    cin >> n;

    cout << "Enter all the elements " << endl;
    for (i = 0; i < n; i++)

        cin>> arr.A[i];

    arr.length = n;

    Display(arr);

    return 0;
}