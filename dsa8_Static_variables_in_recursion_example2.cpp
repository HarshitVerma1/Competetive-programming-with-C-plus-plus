#include <iostream>
using namespace std;
static int x = 0;
int fun(int n)
{
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    cout << fun(5);
}