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
    cout << endl;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// int LinearSearch(struct Array arr, int key)
// {
//     for (int i = 0; i < arr.length; i++)
//     {
//         if (key == arr.A[i])

//             return i;
//     }
//     return -1;
// }

int ILinearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length - 1; i++)
    {
        if (key == arr->A[i])
            swap(&arr->A[i], &arr->A[i - 1]);

        return i;
    }
    return -1;
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
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int Reverse(struct Array *arr)
{
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(&arr->A[i], &arr->A[j]);
    }
}

void Insertsort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}
int isSorted(struct Array arr)
{
    int i;
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}
void Rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}

int main()
{
    struct Array arr = {{2, -4, 6, -7, 8, -9, 10, 13, -14, 15}, 10, 20};

    cout << ILinearSearch(&arr, 13) << endl;
    Display(arr);

    return 0;
}