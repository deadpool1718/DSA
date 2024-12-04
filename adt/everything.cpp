#include <iostream>
using namespace std;
struct Array
{

    int A[10];
    int size;
    int length;

    void Display();
    void Insert(int index, int key);
    void Append(int index, int key);
    void Delete(int index);
    void Reverse();
    int BinarySearch(int key);
    int Max();
    int Min();
    int Get(int index);
    int Set(int index, int key);
    int Sum();
    int Average();
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
void Array::Insert(int index, int key)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length; i >= index; i--)
            A[i + 1] = A[i];

        A[index] = key;
        length++;
    }
}

void Array::Append(int index, int key)
{
    if (index >= 0 && index <= length)
    {
        A[index] = key;
    }
}

void Array::Delete(int index)
{
    if (index >= 0 && index <= length)
    {
        for (int i = index; i < length - 1; i++)

            A[i] = A[i + 1];

        length--;
    }
}

void Array::Reverse()
{
    int i = A[0];
    int j = A[length - 1];
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    cout << "Reversed array is: " << endl;
}

int Array::BinarySearch(int key)
{
    for (int i = 0; i < length - 1; i++)
        if (key == A[i])
        {
            cout << "Element " << key << " is found at index " << i << "." << endl;
        }
    cout << "Element is not found." << endl;
    return -1;
}

int Array::Set(int index, int key)
{
    if (index >= 0 && index < length)

        A[index] = key;
}

int Array::Get(int index)
{
    if (index >= 0 && index < length)

        cout << "The value at index " << index << " is " << A[index] << endl;
    else
        cout << "Invalid attribute!" << endl;
}

int Array::Max()
{

    int max = A[0];
    for (int i = 1; i < length; i++)
    {
        if (max < A[i])

            max = A[i];
    }
    cout << "The maximum element is " << max << "." << endl;
}
int Array::Sum()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum = sum + A[i];
    cout << "The sum of the array is: " << sum << "." << endl;
}
int Array::Average()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum = sum + A[i];

    int avg = sum / length;
    cout << "The average of this array is " << avg << "." << endl;
}
int Array::Min()
{

    int min = A[0];
    for (int i = 1; i < length; i++)
    {
        if (min > A[i])

            min = A[i];
    }
    cout << "The minimum element is " << min << "." << endl;
}

int main()
{
    Array arr = {{23, 22, 34, 45, 56, 67, 87, 76, 54, 32}, 10, 10};
    arr.Display();
    // arr.Insert(3, 333);
    // arr.Display();
    // arr.Append(3, 222);
    // arr.Display();
    // arr.Delete(3);
    // arr.Display();
    // arr.Reverse();
    // arr.Display();
    // arr.BinarySearch(999);
    // arr.Max();
    // arr.Min();
    // arr.Get(999);
    // arr.Set(1, 555);
    // arr.Display();
    // arr.Sum();
    // arr.Average();
    cout << "MENU\n1.Insert\n2.Append\n3.Delete\n4.Reverse\n5.BinarySearch\n6.Max\n7.Min\n8.Get\n9.Set\n10.Sum\n11.Average" << endl;
    int choice;
    cout << "Enter the operation you want to perform:" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        int index;
        int key;
        cout << "Enter the index: " << endl;
        cin >> index;
        cout << "Enter the key: " << endl;
        cin >> key;
        arr.Insert(index, key);
        cout << "Inserted the element:" << endl;
        arr.Display();
        break;
    case 2:

        cout << "Enter the index: " << endl;
        cin >> index;
        cout << "Enter the key: " << endl;
        cin >> key;
        arr.Append(index, key);
        cout << "Appended the element:" << endl;
        arr.Display();
        break;

    default:
        break;
    }
    return 0;
}