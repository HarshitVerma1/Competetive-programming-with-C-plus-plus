#include <iostream>
using namespace std;
int Sum(int n)
{
    int total = 0;
    if (n > 0)
    {
        return n + Sum(n - 1);
    }
}
int main()
{
    int Total = 0, n;
    cin >> n;
    cout<<Sum(n);
}
