#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, count, sum, copy, m;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        count = 0;
        copy = i;
        while (copy != 0)
        {
            copy = copy / 10;
            count++;
        }

        copy = i;
        do
        {
            m = copy % 10;
            copy /= 10;
            sum += pow(m, count);
        } while (copy != 0);
        if (sum == i)
        {
            cout << i << ", ";
        }
    }
}