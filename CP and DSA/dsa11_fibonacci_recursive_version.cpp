#include<iostream>
using namespace std;
//================================================================================================================================
//                                  Recursive Version of Fibonacci Series
//                                   find nth term in fibonacci series

int fib(int n)
    {
        if (n <= 1)
            return n;
        return fib(n - 2) + fib(n - 1);
    }
//================================================================================================================================

int main()
{
    int x;
    cin>>x;
    cout<<fib(x);
}