#include <iostream>
#include <cmath>
using namespace std;
void Armstrong(int m, int n)
{
    for (int i = m; i <= n; i++)
    {
        int count = 0, temp, sum = 0, last_digit;
        temp = i;
        while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }
        temp = i;
        // cout << "Count: " << count << endl;
        while (temp != 0)
        {
            last_digit = temp % 10;
            temp = temp / 10;
            sum = sum + pow(last_digit, count);
        }
        // cout << "Sum: " << sum << endl;
        if (i == sum)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    Armstrong(m, n);
}