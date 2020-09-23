#include <iostream>
#include <cmath> // #include<math.h>
using namespace std;
int main()
{
    int count = 0, sum = 0, n, copy, temp;
    cin >> n;
    cout << endl;
    copy = n;
    while (copy != 0)
    {
        copy = copy / 10;
        count++;
    }

    // cout<< count<<endl; // shows the no. of digit
    copy = n;
    do
    {
        temp = copy % 10;
        copy /= 10;
        sum = sum + pow(temp, count);
    } while (copy != 0);

    // cout << "Sum is :" << sum << endl;

    if (sum == n)
    {
        cout << "That's a ARMSTRONG" << endl;
    }
}