#include <iostream>
#include <cstdlib>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

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
        cout << arr.A[i] << " ";
    }
};


void Reverse(struct Array *arr)
{
    int *B;
    int i, j;
    B = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}
// void Reverse2(struct Array *arr)
// {
//     int i, j;
//     for (i = 0, j = arr->length - 1; i < j; i++, j--)
//     {
//         swap(arr->A[i], &arr->A[j]);
//     }
// }

int main()
{
    struct Array arr = {{23, 5, 6, 7, 10}, 10, 5};
    Reverse(&arr);
    Display(arr);

    return 0;
}