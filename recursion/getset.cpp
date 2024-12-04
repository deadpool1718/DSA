#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    cout << "Elements are ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i];
    }
};

int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

void Set(struct Array *arr, int index, int x)
{
}

int main()
{
    struct Array arr = {{34, 6, 3, 27, 23}, 5, 10};
    Get(arr, 3);
    return 0;
}