#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout << "Elements are " << endl;
    for (int i = 0; i < arr.length; i++)

        cout << arr.A[i] << " ";
}


void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}
void Insert(struct Array *arr, int index, int x)
{

    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
            arr->A[index] = x;
            arr->length++;
        }
    }
}

int Delete(struct Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (int i = index; i <= arr->length-1; i++)
        {
            arr->A[i] = arr->A[i + 1];
            arr->length--;
            return x;
        }
    }
    return 0;
}

int main()
{
    struct Array arr = {{1, 3, 5, 6, 7}, 10, 5};
    // Append(&arr, 10);
    cout << endl;
    // Insert(&arr, 3, 10);
    Delete(&arr, 4);
    Display(arr);
    return 0;
}