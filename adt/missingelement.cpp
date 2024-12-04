#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
    int sum();
};
int Array:: sum(){
    cout<<"The sum is:"<<endl;
    int sum=0;
    for (int i = 0; i < length; i++)
    {
       sum=sum+A[i];
    }
    return sum;  
}
int sumofNN(int n){
    return n*(n+1)/2;
}

int main()
{  int x;
    cin>>x;
   Array arr={{1,2,3,4,5,6,8,9,10,11,12},20,12};
   cout<<arr.sum()<<endl;
   cout<<sumofNN(x)<<endl;
   cout<<"The missing element is:"<<sumofNN(x)-arr.sum()<<endl;
   
    return 0;
}