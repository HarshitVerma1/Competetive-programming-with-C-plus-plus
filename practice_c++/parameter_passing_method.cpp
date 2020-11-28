#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << endl
         << "Now , X is : " << x << "  & Y is :" << y << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << endl
         << a << endl
         << b << endl;
}