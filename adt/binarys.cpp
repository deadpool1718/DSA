#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int length;
    int size;
};
void Display(struct Array arr)
{
    cout << "Elements are " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}

int BinarySearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {8, 9, 4, 7, 6, 3, 10, 5, 14, 2};
    cout << BinarySearch(arr, 7) << endl;
    Display(arr);
    return 0;
}