#include <iostream>
using namespace std;
int main()
{
    long int n, a, b,i, sum = 0;
    cout << "Enter a no. : ";
    cin >> n;
    for (i = 1; i <=n ; i++)
    {
        b = i;
        while (b!=0)
        {
            a = b % 10;
            b = b / 10;
            sum = sum + (a * a * a);
        }
        if(sum==i)
        {
            cout << i << "  ";
        }
        sum = 0;
    }
}