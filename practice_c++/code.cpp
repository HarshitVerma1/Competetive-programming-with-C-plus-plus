#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int c[count - 1];
    for (int i = 0; i < count; i++)
    {
        int sum, s, w1, w2, w3;
        cin >> s >> w1 >> w2 >> w3;
        sum = w1 + w2 + w3;
        if (s > sum)
        {
            c[i] = 1;
        }
        else
        {
            int sum1 = w1 + w2;
            int sum2 = w2 + w3;
            if (s <= sum1 || s <= sum2)
            {
                c[i] = 2;
            }
            else
            {
                c[i] = 3;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << c[i] << endl;
    }
}