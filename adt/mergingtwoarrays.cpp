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

struct Array* Merge(struct Array *arr1, struct Array *arr2)
{
    int i=0, j=0,k=0;
    struct Array *arr3 = new Array;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i]<arr2->A[j])
        
            arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];
        
        
    }
    for ( ; i < arr1->length; i++)
       arr3->A[k++]=arr1->A[i]; 

    for ( ; j < arr2->length; j++)
       arr3->A[k++]=arr2->A[j];
    
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
    return arr3;
    
}

int main()
{
      struct Array *arr3;
    struct Array arr1 = {{34, 452, 256, 234, 53}, 5, 10};

    struct Array arr2 = {{35, 42, 25, 36, 3}, 5, 10};
    arr3=Merge(&arr1,&arr2);
    Display(*arr3);
    return 0;
}