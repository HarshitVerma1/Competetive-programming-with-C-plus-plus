#include <iostream>
using namespace std;
int main()
{
    long int n, i, count = 0, sum = 0;
    cout << "Enter a integer : ";
    cin >> n;
    cout << endl
         << "Factors of " << n << " is = ";
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i;
            count++;
            sum += i;
            if (i < n)
            {
                cout << ",  ";
            }
            if (i == n)
            {
                cout << " ;";
            }
        }
    }

    cout << endl
         << "No. of factors = " << count << endl;

    if (count == 2)
    {
        cout << "So , THAT's A PRIME NUMBER !!" << endl;
    }
    if (sum == 2 * n)
    {
        cout << "That's also a PERFECT NUMBER !! " << endl;
    }
}
