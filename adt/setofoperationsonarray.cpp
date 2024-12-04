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
    cout << "Displaying the elements: " << endl;
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
struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = new Array;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])

            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = new Array;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])

            i++;
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else if (arr1->A[i] == arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array *Difference(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = new Array;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])

            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else
        {
            i++;
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

int main()
{
    struct Array arr4;
    struct Array arr1 = {{34, 452, 256, 234, 53}, 5, 10};

    struct Array arr2 = {{35, 42, 25, 36, 3}, 5, 10};
    int ch;


    cout << "Enter the size of Array: " << endl;
    cin >> arr4.size;
    do
    {
     
        cout<<"*****Menu*****"<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Union"<<endl;
        cout<<"3. Intersection"<<endl;
        cout<<"4. Difference"<<endl;

        cout<<"Enter your choice:"<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1: 
            cout<<"Performing insertion:"<<endl;
            break;
        case 2: 
            cout<<"Performing Union:"<<endl;
            Union(&arr1,&arr2);
            break;
        case 3: 
            cout<<"Performing Intersection :"<<endl;
            Intersection(&arr1,&arr2);
            break;
        case 4: 
            cout<<"Performing Difference :"<<endl;
            Difference(&arr1,&arr2);
            break;
        
        default:
            break;
        }
    
    } while (ch>6);
    

    
  
   
    return 0;
}