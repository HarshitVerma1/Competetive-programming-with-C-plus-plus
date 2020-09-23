#include <iostream>
using namespace std;
int main()
{
    int n, copy_n, last_digit, temp, reverse_no = 0;
    cin >> n;
    copy_n = n;
    do
    {
        last_digit = copy_n % 10;
        copy_n /= 10;
        reverse_no = reverse_no * 10 + last_digit;
    } while (copy_n != 0);
    cout << endl
         << reverse_no;
    if (n == reverse_no)
    {
        cout << endl
             << "That's a PLINDROME No." << endl;
    }
}