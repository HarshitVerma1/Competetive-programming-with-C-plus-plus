#include<iostream>
using namespace std;

//==============================================================================================================================
                //               LOOP VERSION 
// double e(double x,double n)
// {
//     double p = 1;
//     for (; n > 0;n--)
//     {
//         p = 1 + (x / n) * p;
//     }
//     return p;
// }

//==============================================================================================================================

double e(double x, double n)
{
    static double p = 1; //static variable is necessary in RECURSIVE VERSION.
    if(n==0)
        return p;
    p = 1 + (x / n) * p;
    return e(x,n-1);
}

//==============================================================================================================================

int main()
{
    double x, n;
    cin >> x >> n;
    cout << e(x, n);
}