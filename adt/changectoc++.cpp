#include <iostream>
using namespace std;
class Array
{
private:
    int *A;
    int size;
    int length;
    void swap(int *x, int *y);

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz)
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    ~Array()
    {
        delete[] A;
    }
    void Display();
    void Append(int x);
    void Insert(int index, int x);
    int LinearSearch(int key);
    int BinarySearch(int key);
    int Get(int index);
    int Set(int index,int x);
    int Min();
    int Max();
    int Sum();
    int Avg();
    int Reverse();
    int Reverse2();
    int Rearrange();
    int Rearrange2();
    void isSorted();
    Array *Merge(Array *arr2);      
    Array *Intersection(Array *arr2);
    Array *Difference(Array *arr2);
};

void Array::Display()
{
    cout << "Displaying the elements:" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void Array::Append(int x)
{
    if (length < size)
        A[length++] = x;
}

void Array::Insert(int index, int x)
{
    int i;
    if (index >= 0 && index <= length)
    {

        for (int i = length; i < index; i--)
            A[i] = A[i - 1];
        A[index] = x;
        length++;
    }
}

Array *Array::Merge(Array *arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(size + arr2->size);

    while (i < length && j < arr2->length)
    {
        if (A[i] < arr2->A[j])
            arr3->A[k++] = A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }

    for (; i < length; i++)
        arr3->A[k++] = A[i];

    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = k;
    return arr3;
}

int main()
{

    return 0;
}