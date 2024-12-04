// #include<iostream>
// using namespace std;
// double e(int x, int n){
//     static double s;
//     if(n==0)
//     return s;
//     s=1+x*s/n;
//     return e(x,n-1);
// }

// int main(){
//     int a, b;
//     cin>>a>>b;
//     cout<<e(a,b);

//     return 0;
// }

#include <iostream>
using namespace std;
double e(int x, int n)
{
    static double s = 1;
    int i;
    double nom = 1;
    double den = 1;
    for (i = 1; i <= n; i++)
    {
        nom *= x;
        den *= i;
        s += nom / den;
    }
    return s;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << e(a, b);

    return 0;
}