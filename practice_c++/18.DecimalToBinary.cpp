#include <iostream>
using namespace std;
int main()
{
    int n, m = 0, count = 0, rem;
    cin >> n;
    int A[n];
    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        A[m] = rem;
        if (n == 1)
        {
            A[m + 1] = 1;
        }
        ++m;
    }
    cout << "Binary Array is : ";
    for (int i = 0; i < m; i++)
    {
        cout << A[i] << ", ";
    }
}