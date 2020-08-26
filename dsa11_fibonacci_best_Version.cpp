#include<iostream>
using namespace std;
int F[100];
int fib(int n)
{
    for (int i = 0; i < 1000; i++)
    {
        F[i] = -1; // for notation
    }

    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n-2]==-1)
        {
            F[n - 2] = fib(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = fib(n - 1);
        }
        return F[n - 1] + F[n - 2];
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n+2);
}