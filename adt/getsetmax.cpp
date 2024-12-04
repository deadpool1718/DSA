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
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}
int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}
// int Set()
int Max(struct Array arr)
{
    int max = arr.A[0];

    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}
int min(struct Array arr)
{
    int min = arr.A[0];

    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)

            min = arr.A[i];
    }
    return min;
}
int sum(struct Array arr)
{
    int s = 0;
    int i;
    for (i = 0; i < arr.length; i++)
    {
        s = s + arr.A[i];
    }
    return s;
}
double avg(struct Array arr){
    
    int s = 0;
    int i;
    for (i = 0; i < arr.length; i++)
    {
        s = s + arr.A[i];
    }
    return static_cast<double>(s)/arr.length;
    
}
int Rsum(struct Array arr, int n)
{
    if (n < 0)
    {
        return 0;
    }
    else
    {
        return Rsum(arr, n - 1)+ arr.A[n];
    }
}

int main()
{
    struct Array arr = {{1, 3, 4, 5, 6}, 5, 10};
    cout<<avg(arr)<<endl;
    Display(arr);

    return 0;
}