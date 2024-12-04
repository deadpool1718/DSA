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
    int i;
    cout << "\nElements are: " << endl;
    for (int i = 0; i < arr.length; i++)

        cout << arr.A[i] << " ";
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
};

void Insert(struct Array *arr, int index, int x)
{

    if (arr->length < arr->size)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
int Delete(struct Array *arr, int index)
{
    int x;

    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)

            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    return 0;
}
int LinearSearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])

              return i;
            
    }
    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
    LinearSearch(arr, 2);
    Display(arr);

    // Append(&arr, 10);
    // Display(arr);
    // Insert(&arr, 3, 30);
    // Display(arr);
    // Delete(&arr, 1);
    // Display(arr);

    return 0;
}