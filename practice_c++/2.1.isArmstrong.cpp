#include <iostream>
#include <cmath>
using namespace std;
void isArmstrong(int n)
{
    int count = 0, temp, sum = 0, last_digit;
    temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = n;
    cout << "Count: " << count << endl;
    while (temp != 0)
    {
        last_digit = temp % 10;
        temp = temp / 10;
        sum = sum + pow(last_digit, count);
    }
    cout << "Sum: " << sum << endl;
    if (n == sum)
    {
        cout << "It is an Armstrong Number." << endl;
    }
    else
    {
        cout << "Not An Armstrong Number" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    isArmstrong(n);
}