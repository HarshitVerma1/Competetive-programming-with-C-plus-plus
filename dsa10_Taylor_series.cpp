#include<iostream>
using namespace std;
float p = 1, f = 1;
float r;
double e(int m,int n)
{
    if (n==0)
        return 1;
    r = e(m, n - 1);
    p = p * m;
    f = f * n;
    return r + p / f;
}
int main()
{
    double x, y;
    cin >> x >> y;
    cout << e(x, y);
    // where , x = power of e (exponenrt)
    //     and y = no. of terms for accuracy
}